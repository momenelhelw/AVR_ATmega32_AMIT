/*
* Motor.c
*  Author: Cherry Hani
*/

#include "Motor.h"

void Motor1_Initialization(void)
{
	DIO_SetPin_Direction(Motor_CNTRL_Port, Motor_EN1, Motor_OUT);
	DIO_SetPin_Direction(Motor_DATA_Port, Motor_IN1, Motor_OUT);
	DIO_SetPin_Direction(Motor_DATA_Port, Motor_IN2, Motor_OUT);
}
void Motor2_Initialization(void)
{
	DIO_SetPin_Direction(Motor_CNTRL_Port, Motor_EN2, Motor_OUT);
	DIO_SetPin_Direction(Motor_DATA_Port, Motor_IN3, Motor_OUT);
	DIO_SetPin_Direction(Motor_DATA_Port, Motor_IN4, Motor_OUT);
}
void Motor1_Enable(void)
{
	DIO_SetPin_State(Motor_CNTRL_Port, Motor_EN1, Motor_HIGH);
}
void Motor2_Enable(void)
{
	DIO_SetPin_State(Motor_CNTRL_Port, Motor_EN2, Motor_HIGH);
}
void Motor1_Disable(void)
{
	DIO_SetPin_State(Motor_CNTRL_Port, Motor_EN1, Motor_LOW);
}
void Motor2_Disable(void)
{
	DIO_SetPin_State(Motor_CNTRL_Port, Motor_EN2, Motor_LOW);
}
void Motor1_CW(void)
{
	DIO_SetPin_State(Motor_DATA_Port, Motor_IN1, Motor_HIGH);
	DIO_SetPin_State(Motor_DATA_Port, Motor_IN2, Motor_LOW);
}
void Motor1_CCW(void)
{
	DIO_SetPin_State(Motor_DATA_Port, Motor_IN1, Motor_LOW);
	DIO_SetPin_State(Motor_DATA_Port, Motor_IN2, Motor_HIGH);
}
void Motor2_CW(void)
{
	DIO_SetPin_State(Motor_DATA_Port, Motor_IN3, Motor_HIGH);
	DIO_SetPin_State(Motor_DATA_Port, Motor_IN4, Motor_LOW);
}
void Motor2_CCW(void)
{
	DIO_SetPin_State(Motor_DATA_Port, Motor_IN3, Motor_LOW);
	DIO_SetPin_State(Motor_DATA_Port, Motor_IN4, Motor_HIGH);
}