/*
 * Interfacing_Modules_AMIT_F20.c

 * Author: Cherry Hani
 
 */ 


#include "UART.h"
#include "SPI.h"




int main(void)
{

	UART_Init();
	uint8_t* data;
	Master_Init();


	while(1)
	{
		data = UART_Receive();
		if (data == '1')
		{
			Master_Trans(1);
			
		}
		else if (data == '2')
		{
			Master_Trans(2);
		}
		else if (data == '0')
		{
			Master_Trans(0);
		}
	}
	
}

