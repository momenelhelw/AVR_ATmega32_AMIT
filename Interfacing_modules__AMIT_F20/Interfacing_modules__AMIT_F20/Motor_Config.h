/*
* Motor_Config.h
*  Author: Cherry Hani
*/


#ifndef MOTOR_CONFIG_H_
#define MOTOR_CONFIG_H_

#include "CPU_Configurations.h"

typedef enum
{
	Motor1 ,
	Motor2
}Motor_Type;

#define Motor_CNTRL_Port DIO_PORTD
#define Motor_DATA_Port  DIO_PORTC

#define Motor_EN1 DIO_PIN4
#define Motor_EN2 DIO_PIN5

#define Motor_IN1 DIO_PIN3
#define Motor_IN2 DIO_PIN4
#define Motor_IN3 DIO_PIN5
#define Motor_IN4 DIO_PIN6

#define Motor_LOW  DIO_LOW
#define Motor_HIGH DIO_HIGH
#define Motor_OUT  DIO_OUTPUT

#endif /* MOTOR_CONFIG_H_ */