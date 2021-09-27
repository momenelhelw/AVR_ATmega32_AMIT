/*
 * Interfacing_Modules_AMIT_F20.c
 * Author: Cherry Hani
 */ 
#include "OUTPUT_Module.h"
#include "SPI.h"


int main(void)
{
	
	Slave_Init();
	LED0_Initialize();
	BUZZER_Initialize();
	uint8_t data;
	
	
	while(1)
	{
		data = Slave_Recv();
		if (data == 1)
		{
			LED0_ON();
			
		}
		else if (data == 2)
		{
			BUZZER_ON();
			
		}
	
		else if (data == 0)
		{
			LED0_OFF();
			BUZZER_OFF();
		
		}
	}	
}


