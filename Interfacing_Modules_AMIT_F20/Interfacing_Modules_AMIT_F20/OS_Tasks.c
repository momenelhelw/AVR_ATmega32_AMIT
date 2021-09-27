/*
 * OS_Tasks.c

 *  Author: Cherry Hani
 */ 
#include "S7SEG.h"
#include "OS_Tasks.h"
#include "Timer0.h"

uint8_t inc = 0;

void checkBtn1(void)
{
	if (inc < 255)
	{
		if (GET_BIT(PINB, 6) == 0)
		{
			while (GET_BIT(PINB, 6) == 0);
			inc++;
		}
	}
}
void checkBtn2(void)
{
	if (inc > 0)
	{
		if (GET_BIT(PINB, 7) == 0)
		{
			while (GET_BIT(PINB, 7) == 0);
			inc--;
		}
	}
}
void displayRes(void)
{
	PORTA = inc;
	uint8_t data0 = PORTA % 10;//Get number in units
	uint8_t data1 = PORTA / 10;//Get number in tens
	
	S7SEG_Enable1();
	S7SEG_Disable2();
	PORTA = (data0<<4) | (PORTA & 0x0F);//0b00001111
	Timer0_Normal_OVF_With_Interrupt_Delay(10);
	S7SEG_Disable1();
	S7SEG_Enable2();
	PORTA = (data1<<4) | (PORTA & 0x0F);//0b00001111
	Timer0_Normal_OVF_With_Interrupt_Delay(10);
}