#include <LPC22xx.H>                       /* LPC21xx definitions */
#include <global.h>
#include <irq.h>								 

/******************************************************************************/
/*               		 Inicializa as Interrupcoes			                  */
/******************************************************************************/
//void init_irq(void){
//	
//	//setup the timer counter 0 interrupt
//	//PCLK = 60Mhz 
//	//periodo = 1/60Mhz = 16,66ns   
//	VICVectCntl0 = 0x20 | 4;                     //Interrupcao O sera o Timer0
//	VICVectAddr0 = (unsigned long)timer0;        //Usa o Vetor 0 para interrupcao do timer0  
//	T0MR0 = 60241;                               //MRO conta ate 7499, overflow = 60241 * 16,6ns = 1ms    
//	T0MCR = 3;                                   //Interrompe quando igual a MRO e Reseta a contagem  
//	T0TCR = 1;                                   //Timer0 Enable 	
//	
//	//setup the interrupt extern
//	//VICVectCntl1 = 0x20 | 14;                   //Interrupcao O sera o Timer0
//	//VICVectAddr1 = (unsigned long)extr;			//Usa o Vetor 0 para interrupcao do timer0  
//	//EXTMODE = 1;
//	//EXTPOLAR = 1;
//		
//	//setup the ADC module
// 	//VICVectCntl2 = 0x20 | 18;                   //Interrupcao O sera o Timer0
//	//VICVectAddr2 = (unsigned long)ADC;			//Usa o Vetor 0 para interrupcao do timer0  
//	//ADCR = 0x002104FF;							
//	//	     ||||||++-------------------------->Bits 0..7 SEL = habilita canal AD. Todos habilitados	
//	//	     ||||++---------------------------->Bits 8..15 CLKDIV = PCLK / (4 + 1) = 3Mhz
//	// 		 |||+------------------------------>Bit 16 BURST = 1 Habilita modo BURST
//	//		 |||+------------------------------>Bits 17..19 CLKS = 11 clocks / 10 bits												
//	//		 ||+------------------------------->Bit 20 Reservado
//	//		 ||+------------------------------->Bit 21 PDN = Habilita conversao do AD
//	//		 ||+------------------------------->Bits 22..23 Reservados
//	//		 |+-------------------------------->Bits 24..26 Start = Nao usado com Burst habilitado
//	//		 |+-------------------------------->Bit 27 EDGE = Nao usado com Burst habilitado
//	//		 +--------------------------------->Bits 28..31 Reservados
//	//ADINTEN = 0x0080;              				//Ativa interrupção no final da conversão do canal 7 	
//	 
//	//setup the un-assigned interrupts
// 	VICDefVectAddr = (unsigned long) DefISR;     //un-assigned VIC interrupts
//	
//	//Habilita ou nao as interrupções
//	VICIntEnable = 0x00000010;                  //Habilita Interrupcao Timer0, externa e ADC
//	
//}

