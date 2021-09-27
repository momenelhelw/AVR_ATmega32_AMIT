/*
 * Timer0_Config.h

 *  Author: Cherry Hani
 */ 


#ifndef TIMER0_CONFIG_H_
#define TIMER0_CONFIG_H_

#include "CPU_Configurations.h"
#include "Timer0_Address.h"


#define F_OSC                  16
#define PRESCALER              1024
#define MicroSecond            1000
#define Number_Bits            256

#define Normal_Mode            0
#define PhaseCorrect_PWM_Mode  1
#define CTC_Mode               2
#define Fast_PWM_Mode          3

#define OC0_Disconnected       0
#define OC0_Toggle_Pin         1
#define OC0_Set_Pin            2
#define OC0_Clear_Pin          3

#define PRE_0                  0
#define PRE_1                  1
#define PRE_8                  2
#define PRE_64                 3
#define PRE_256                4
#define PRE_1024               5

#define Timer0_Mode            Normal_Mode
#define Timer0_Prescaler       PRE_1024

#endif /* TIMER0_CONFIG_H_ */