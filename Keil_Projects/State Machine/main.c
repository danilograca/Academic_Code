#include "state_machine.h"
#include "LED.h"
#include <LPC22xx.H>
#include <STDIO.h>

int main (void) {
	
	static volatile int count=0;
	
	sm_init();
		
		 

	
	//while (1) {
	//	count++;
		stateMachine();
		
	//}
 
}
