#include <LPC22xx.H>                     
#include <primitivetypes.h>
#include <init.h> 
#include <global.h>

#include <LdraTest.h>

    bool_t b_On;
    bool_t b_Fail;
    bool_t b_Panel;
    bool_t b_Shutdown;
    bool_t b_Maintenance;
    signed short sshort_Position;
    unsigned short ushort_Mode;
    unsigned short ushort_Power;
    unsigned short ushort_State;
    unsigned short ushort_timeCount;
 
 void led(){
	volatile static char x = 0;	

	if(((flaggeral & 4) == 4) && (x == 1)){
		flaggeral &= 0xFB;
		x = 0;
		IO0SET = 0x00000004;                          // Turn on LED 
   	}

	if(((flaggeral & 4) == 4) && (x == 0)){
		flaggeral &= 0xFB;
		x = 1;
		IO0CLR = 0x00000004;                          // Turn on LED 
    } 
}
																
int main (void){

	static volatile uint16_t count=0;
	static volatile uint64_t count1=0xFFFFFFFFFFFFFFFF;
	static volatile uint32_t countID=0;
	
	b_Fail = 0;
  ushort_Mode = 0U;
  b_Panel = 0;
  sshort_Position = 0U;
  ushort_State = 1U;
  ushort_Power = 0U;
  b_On = 0;
  b_Maintenance = 0;
  ushort_timeCount = 0U;
  b_Shutdown = 0;
		 
	hardware_init();
	
	IO0CLR = 0x00000400;                          //Liga Backlight do LCD

  	while (1){

		//LdraTest();
			
		led();
		
		if (ushort_State == 9U) 
    {
        /*EMERGENCY STATE*/
        ushort_State = 1U;
        /*System on STANDBY*/
        b_On = 0;
    }
    else if (ushort_State == 7U) 
    {
        if (ushort_Mode == 2U) 
        {
            if (b_Fail == 1) 
            {
                // Mode EXTEND on REDUCED STATE
                sshort_Position += 1U;
            } 
            else 
            {
                sshort_Position += 2U;
            }

            if (sshort_Position > 20U) 
            {
                // Change to mode PANEL OPEN
                ushort_Mode = 3U;
            }
        } 
        else if (ushort_Mode == 4U) 
        {
            if (b_Fail == 1) 
            {
                // Mode RETRACT 
                sshort_Position -= 1U;
            } 
            else 
            {// Mode RETRACT 
                sshort_Position -= 2U;
            }
            
            if (sshort_Position < 0) 
            {
                //*Change to mode PANEL CLOSE
                ushort_Mode = 1U;
            }
        } 
        else if (ushort_Mode == 1U) 
        {
            //* Mode PANEL CLOSE 
            if (b_Panel == 1) 
            {
                //* Change to mode EXTEND 
                ushort_Mode = 2U;
            }
        } 
        else if (ushort_Mode == 3U) 
        {
            //*Mode PANEL OPEN
            if (b_Panel == 0) 
            {
                //*Change to mode RETRACT
                ushort_Mode = 4U;
            }
        } 
        else 
        {
            // Mode SAFE SHUTDOWN
            sshort_Position = 0U;
        }
    }
    else if (ushort_State == 1U) 
    {
        if (b_On == 1) 
        {
            /*Change State to IBIT*/
            ushort_State = 2U;
            ushort_timeCount = 0U;
        }

        if (b_Shutdown == 1) 
        {
					
        }
    }
    else if (ushort_State == 2U) 
    {
        if (ushort_Power <= 200U) 
        {
            /*Change State to EMERGENCY*/
            ushort_State = 9U;
        }
        else if (ushort_Power <= 500U) 
        {
            /*Change State to FAIL*/
            ushort_State = 3U;
        }
        else 
        {
            ushort_timeCount++;

            if (ushort_timeCount > 5U) 
            {
                /*Change State to READY*/
                ushort_State = 4U;
            }
        }
    }
    else if (ushort_State == 3U) 
    {
        /*Change State to OPERATIONAL REDUCED*/
        ushort_State = 7U;
        ushort_Mode = 1U;
        b_Fail = 1;
    }
    else if (ushort_State == 4U) 
    {
        if (b_Maintenance == 1) 
        {
            /*Change State to MAINTENANCE*/
            ushort_State = 6U;
        }
        else 
        {
            /*Change State to Operational*/
            ushort_State = 7U;
        }
    }
    else 
    {
        if (ushort_State == 6U) 
        {
            /*State MAINTENANCE*/       
        }
    }

		if((flaggeral & 2) == 2){ 
			flaggeral &= 0xFD;

			while(!(C1SR & 0x00000004)){}						//Verifica se Buffer esta livre para transmitir
				C1TFI1 = 0x00020000;					//ID 11 Bits
				C1TID1 = 0x00000350;					//ID da mensagem
				C1TDA1 = count;
				C1CMR = 0x00000001;						//Transmite a mensagem	Self Reception
							
			while(!(C1SR & 0x00000004)){}						//Verifica se Buffer esta livre para transmitir
				C1TFI1 = 0x00020000;					//ID 11 Bits
				C1TID1 = 0x00000380;					//ID da mensagem
				C1TDA1 = count;
				C1CMR = 0x00000001;						//Transmite a mensagem	Self Reception
							
			while(!(C1SR & 0x00000004)){}						//Verifica se Buffer esta livre para transmitir
				C1TFI1 = 0x00020000;					//ID 11 Bits
				C1TID1 = 0x00000200;					//ID da mensagem
				C1TDA1 = count;
				C1CMR = 0x00000001;						//Transmite a mensagem	Self Reception
				
			while(!(C1SR & 0x00000004)){}						//Verifica se Buffer esta livre para transmitir
				C1TFI1 = 0x00020000;					//ID 11 Bits
				C1TID1 = 0x00000300;					//ID da mensagem
				C1TDA1 = count;
				C1CMR = 0x00000001;						//Transmite a mensagem	Self Reception
							
			while(!(C1SR & 0x00000004)){}						//Verifica se Buffer esta livre para transmitir
				C1TFI1 = 0x00020000;					//ID 11 Bits
				C1TID1 = 0x00000340;					//ID da mensagem
				C1TDA1 = count;
				C1CMR = 0x00000001;	
				count++;
		}
	}	   
}
