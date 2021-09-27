/*
 * Motor.h

 *  Author: Cherry Hani
 */ 


#ifndef MOTOR_H_
#define MOTOR_H_

#include "Motor_Config.h"

void Motor1_Initialization(void);
void Motor2_Initialization(void);

void Motor1_Enable(void);
void Motor2_Enable(void);

void Motor1_Disable(void);
void Motor2_Disable(void);

void Motor1_CW(void);
void Motor1_CCW(void);

void Motor2_CW(void);
void Motor2_CCW(void);

#endif /* MOTOR_H_ */