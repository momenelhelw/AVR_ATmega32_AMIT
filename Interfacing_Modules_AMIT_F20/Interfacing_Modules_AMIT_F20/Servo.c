/*
 * Servo.c
 
 *  Author: Cherry Hani
 */ 


#include "Servo.h"

void Servo_Initialization(void)
{
	SET_BIT(DDRD, PD5);/*Define direction for OC1 pin*/
	SET_BIT(TCCR1B, WGM13);SET_BIT(TCCR1A, WGM12);SET_BIT(TCCR1A, WGM11);CLR_BIT(TCCR1A, WGM10);/*Choose ICR*/
	SET_BIT(TCCR1A, COM1A1);CLR_BIT(TCCR1A, COM1A0);/*Choose Non Inverting Mode*/
	ICR1 = 1250;/*Change top value*/
	SET_BIT(TCCR1B, CS12);CLR_BIT(TCCR1B, CS11);CLR_BIT(TCCR1B, CS10);/*Choose prescaler 256*/
}
void Servo_Rotate(uint8_t angle)
{
	OCR1A = ((angle * 1250) / 100) - 1;
}