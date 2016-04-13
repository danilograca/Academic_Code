
unsigned int b_On;
unsigned int b_Fail;
unsigned int b_Panel;
unsigned int b_Shutdown;
unsigned int b_Maintenance;
signed short sshort_Position;
unsigned short ushort_Mode;
unsigned short ushort_Power;
unsigned short ushort_State;
unsigned short ushort_timeCount;

/*
 *  Variables Initialization of State Machine
 */
void sm_init(){
	
	b_Fail = 0U;
	ushort_Mode = 0U;
	b_Panel = 0U;
	sshort_Position = 0U;
	ushort_State = 1U;
	ushort_Power = 0U;
	b_On = 0U;
	b_Maintenance = 0U;
	ushort_timeCount = 0U;
	b_Shutdown = 0U;
}

/*
 * State Machine Declaration
 */
void stateMachine(){
	
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
}
