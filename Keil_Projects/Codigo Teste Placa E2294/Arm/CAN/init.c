#include <LPC22xx.H>                       /* LPC21xx definitions */
//#include <irq.h> 
#include <global.h>

#define CAN_LBK 0x01000000					//Usar esse para hardware do KitARM
#define CAN_RS 0x00800000					//Usar esse para hardware do KitARM
//#define CAN_LBK 0x02000000				//Usar esse para hardware da TLM
//#define CAN_RS 0x01000000					//Usar esse para hardware da TLM


/******************************************************************************/
/*                Timer Counter 0 interrupt service function                  */
/*                executes each 1ms                                          */
/******************************************************************************/
__irq void timer0 (void){
	
	volatile static int t10ms = 0,t50ms = 0,t100ms = 0, t1s = 0;
	
	flaggeral |= 1;								//Seta a cada 1ms
	//flaggeral |= 2;					 	 
	t10ms ++;
	if(t10ms == 10){						  	//Ocorre a cada 200us
		//flaggeral |= 2;		
		t10ms = 0;
	}
	
	t50ms ++;
	if(t50ms == 50){						  	//Ocorre a cada 100ms
		flaggeral |= 4;
		flaggeral |= 2;		
		t50ms = 0;
	}
	
	t100ms ++;
	if(t100ms == 100){							//Ocorre a cada 100ms
		//flaggeral |= 2;
		flaggeral |= 8;	
		//ADCR |= 0x00010000;					//Bit 21 PDN = Habilita conversao do AD	
		t100ms = 0;
	}
	
	t1s ++;
	if(t1s == 1000){
		//flaggeral |= 2;
		flaggeral |= 0x10;							//Seta a cada 1 segundo
		t1s = 0;
	}
			

	T0IR = 1;                                   // Clear interrupt flag        
	VICVectAddr = 0;                            // Acknowledge Interrupt 																							 ?
}


/******************************************************************************/
/*            	   			 Interrupcao do ADC 			                  */
/******************************************************************************/
__irq void ADC(void){
			
//	varAnalog[0]= ((ADDR0>>6) & 0x03FF);						// Salva valores convertidos no buffer varAnalog[]
//	varAnalog[1]= ((ADDR1>>6) & 0x03FF);
//	varAnalog[2]= ((ADDR2>>6) & 0x03FF);
//	varAnalog[3]= ((ADDR3>>6) & 0x03FF);
//	varAnalog[4]= ((ADDR4>>6) & 0x03FF);
//	varAnalog[5]= ((ADDR5>>6) & 0x03FF);
//	varAnalog[6]= ((ADDR6>>6) & 0x03FF);
//	varAnalog[7]= ((ADDR7>>6) & 0x03FF);
	
	ADCR &= 0xFFFEFFFF;		 					//Bit 21 PDN = Desabilita conversao do AD
		
	VICVectAddr = 0;                            // Acknowledge Interrupt 
}	 
 
/* Default Interrupt Function: may be called when timer ISR is disabled */
 __irq void DefISR (void)
{
  ;
}


void init_irq(void){
	
	//setup the timer counter 0 interrupt
	//PCLK = 60Mhz 
	//periodo = 1/60Mhz = 16,66ns   
	VICVectCntl0 = 0x20 | 4;                     //Interrupcao O sera o Timer0
	VICVectAddr0 = (unsigned long)timer0;        //Usa o Vetor 0 para interrupcao do timer0  
	T0MR0 = 60241;                               //MRO conta ate 7499, overflow = 60241 * 16,6ns = 1ms    
	T0MCR = 3;                                   //Interrompe quando igual a MRO e Reseta a contagem  
	T0TCR = 1;                                   //Timer0 Enable 	
	
	//setup the ADC module
 	//VICVectCntl2 = 0x20 | 18;                   //Interrupcao O sera o Timer0
	//VICVectAddr2 = (unsigned long)ADC;			//Usa o Vetor 0 para interrupcao do timer0  
	//ADCR = 0x002104FF;							
	//	     ||||||++-------------------------->Bits 0..7 SEL = habilita canal AD. Todos habilitados	
	//	     ||||++---------------------------->Bits 8..15 CLKDIV = PCLK / (4 + 1) = 3Mhz
	// 		 |||+------------------------------>Bit 16 BURST = 1 Habilita modo BURST
	//		 |||+------------------------------>Bits 17..19 CLKS = 11 clocks / 10 bits												
	//		 ||+------------------------------->Bit 20 Reservado
	//		 ||+------------------------------->Bit 21 PDN = Habilita conversao do AD
	//		 ||+------------------------------->Bits 22..23 Reservados
	//		 |+-------------------------------->Bits 24..26 Start = Nao usado com Burst habilitado
	//		 |+-------------------------------->Bit 27 EDGE = Nao usado com Burst habilitado
	//		 +--------------------------------->Bits 28..31 Reservados
	//ADINTEN = 0x0080;              				//Ativa interrupção no final da conversão do canal 7 	
	 
	//setup the un-assigned interrupts
 	VICDefVectAddr = (unsigned long) DefISR;     //un-assigned VIC interrupts
	
	//Habilita ou nao as interrupções
	VICIntEnable = 0x00000010;                  //Habilita Interrupcao Timer0, externa e ADC
	
}


/******************************************************************************/
/*                inicializa os perifericos					                  */
/******************************************************************************/
void hardware_init (void)
{
	//setup IO module
	IO0DIR   = 0x00000404;                     
	PINSEL0 |= 0x00058000;						 
	
	init_irq();									//Inicializa as interrupcoes
	
	PINSEL1 |= 0x00040000;						//P0.24 como TXCAN, P0.23 como RXCAN 
	IO2DIR = 0x02000000;						//P2.23 e P2.24 como Saida		Usar esse para KitARM	
	C1MOD = 0x00000001;							//Habilita a escrita no controlador CAN
	C1BTR = 0x00180004;

	C1MOD &= 0xFFFFFFFE;						//Desabilita a escrita no controlador CAN
}
