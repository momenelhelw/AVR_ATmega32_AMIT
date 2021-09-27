/*
* Timer0.c

*  Author: Cherry Hani
*/


#include "Timer0.h"

uint32_t OVF_Counter = 0;
uint32_t CTC_Counter = 0;
uint32_t Initial_Value = 0;

void Timer0_Normal_OVF_Without_Interrupt_Initialization(void)
{
	//Choose wave generation mode to normal mode
	CLR_BIT(TCCR0, WGM01);CLR_BIT(TCCR0, WGM00);
	//Disable interrupt
	CLR_BIT(SREG, 7);
	CLR_BIT(TIMSK, TOIE0);
}
void Timer0_Normal_OVF_Without_Interrupt_Start(void)
{
	//Choose prescaler 1024
	SET_BIT(TCCR0, CS02);CLR_BIT(TCCR0, CS01);SET_BIT(TCCR0, CS00);
}
void Timer0_Normal_OVF_Without_Interrupt_Stop(void)
{
	//Choose prescaler 0
	CLR_BIT(TCCR0, CS02);CLR_BIT(TCCR0, CS01);CLR_BIT(TCCR0, CS00);
}
void Timer0_Normal_OVF_Without_Interrupt_Delay(uint32_t delay)
{
	uint32_t counter = 0;
	uint8_t tick = PRESCALER / F_OSC;
	uint32_t count = ((delay * MicroSecond) / tick);
	uint32_t OVF = count / Number_Bits;
	uint8_t initial = Number_Bits - (count % Number_Bits);
	OVF = OVF + 1;
	TCNT0 = initial;
	//Polling Mode
	while(counter != OVF)
	{
		//Wait until flag is raised
		while(GET_BIT(TIFR, TOV0) != 1);
		//Re-Initialize flag, set flag down
		SET_BIT(TIFR, TOV0);
		counter++;
	}
	return;
}

void Timer0_Normal_OVF_With_Interrupt_Initialization(void)
{
	//Choose wave generation mode to normal mode
	CLR_BIT(TCCR0, WGM01);CLR_BIT(TCCR0, WGM00);
	//Enable interrupt
	SET_BIT(SREG, 7);
	SET_BIT(TIMSK, TOIE0);
}
void Timer0_Normal_OVF_With_Interrupt_Start(void)
{
	//Choose prescaler 1024
	SET_BIT(TCCR0, CS02);CLR_BIT(TCCR0, CS01);SET_BIT(TCCR0, CS00);
}
void Timer0_Normal_OVF_With_Interrupt_Stop(void)
{
	//Choose prescaler 0
	CLR_BIT(TCCR0, CS02);CLR_BIT(TCCR0, CS01);CLR_BIT(TCCR0, CS00);
}
void Timer0_Normal_OVF_With_Interrupt_Delay(uint32_t delay)
{
	uint8_t Tick = PRESCALER / F_OSC;
	uint32_t Count = ((delay * MicroSecond) / Tick);
	OVF_Counter = Count / Number_Bits;
	Initial_Value = Number_Bits - (Count % Number_Bits);
	OVF_Counter ++;
	TCNT0 = Initial_Value;
}

void Timer0_ClearCompare_CTC_Without_Interrupt_Initialization(void)
{
	//Choose wave generation mode to clear timer compare mode
	SET_BIT(TCCR0, WGM01);CLR_BIT(TCCR0, WGM00);
	//Disable interrupt
	CLR_BIT(SREG, 7);
	CLR_BIT(TIMSK, OCIE0);
}
void Timer0_ClearCompare_CTC_Without_Interrupt_Start(void)
{
	//Choose prescaler 1024
	SET_BIT(TCCR0, CS02);CLR_BIT(TCCR0, CS01);SET_BIT(TCCR0, CS00);
}
void Timer0_ClearCompare_CTC_Without_Interrupt_Stop(void)
{
	//Choose prescaler 0
	CLR_BIT(TCCR0, CS02);CLR_BIT(TCCR0, CS01);CLR_BIT(TCCR0, CS00);
}
void Timer0_ClearCompare_CTC_Without_Interrupt_Delay(uint32_t delay, uint8_t ocr)
{
	uint32_t counter = 0;
	OCR0 = ocr;//According to number of events calculated
	uint8_t tick = PRESCALER / F_OSC;
	uint32_t count = ((delay * MicroSecond) / tick);
	uint32_t CTC = count / OCR0;
	CTC = CTC + 1;
	//Polling Mode
	while(counter != CTC)
	{
		//Wait until flag is raised
		while(GET_BIT(TIFR, OCF0) != 1);
		//Re-Initialize flag, set flag down
		SET_BIT(TIFR, OCF0);
		counter++;
	}
	return;
}

void Timer0_ClearCompare_CTC_With_Interrupt_Initialization(void)
{
	//Choose wave generation mode to normal mode
	SET_BIT(TCCR0, WGM01);CLR_BIT(TCCR0, WGM00);
	//Enable interrupt
	SET_BIT(SREG, 7);
	SET_BIT(TIMSK, OCIE0);
}
void Timer0_ClearCompare_CTC_With_Interrupt_Start(void)
{
	//Choose prescaler 1024
	SET_BIT(TCCR0, CS02);CLR_BIT(TCCR0, CS01);SET_BIT(TCCR0, CS00);
}
void Timer0_ClearCompare_CTC_With_Interrupt_Stop(void)
{
	//Choose prescaler 0
	CLR_BIT(TCCR0, CS02);CLR_BIT(TCCR0, CS01);CLR_BIT(TCCR0, CS00);
}
void Timer0_ClearCompare_CTC_With_Interrupt_Delay(uint32_t delay, uint8_t ocr)
{
	OCR0 = ocr;
	uint8_t Tick = PRESCALER / F_OSC;
	uint32_t Count = ((delay * MicroSecond) / Tick);
	CTC_Counter = Count / OCR0;
	CTC_Counter ++;
}


void Timer0_Fast_PWM_Initialization(void)
{
	SET_BIT(DDRB, PB3);/*Define direction for OC0 pin as output*/
	SET_BIT(TCCR0, WGM01);SET_BIT(TCCR0, WGM00);/*Choose Fast PWM*/
	SET_BIT(TCCR0, CS02);CLR_BIT(TCCR0, CS01);CLR_BIT(TCCR0, CS00);/*Prescaler*/
	SET_BIT(TCCR0, COM01);CLR_BIT(TCCR0, COM00);/*Choose Non-Inverting*/
}
void Timer0_Fast_PWM_NonInverting_SetDutyCycle(uint8_t duty)
{
	OCR0 = (Number_Bits * duty) - 1;
}
void Timer0_Fast_PWM_Inverting_SetDutyCycle(uint8_t duty)
{
	SET_BIT(TCCR0, COM01);SET_BIT(TCCR0, COM01);/*Choose Inverting*/
	OCR0 = (Number_Bits - 1) - ((Number_Bits * duty) - 1);
}