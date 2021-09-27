/*
 * Timer0.h

 *  Author: Cherry Hani
 */ 


#ifndef TIMER0_H_
#define TIMER0_H_

#include "Timer0_Config.h"

void Timer0_Normal_OVF_Without_Interrupt_Initialization(void);
void Timer0_Normal_OVF_Without_Interrupt_Start(void);
void Timer0_Normal_OVF_Without_Interrupt_Stop(void);
void Timer0_Normal_OVF_Without_Interrupt_Delay(uint32_t delay);
void Timer0_Normal_OVF_With_Interrupt_Initialization(void);
void Timer0_Normal_OVF_With_Interrupt_Start(void);
void Timer0_Normal_OVF_With_Interrupt_Stop(void);
void Timer0_Normal_OVF_With_Interrupt_Delay(uint32_t delay);

void Timer0_ClearCompare_CTC_Without_Interrupt_Initialization(void);
void Timer0_ClearCompare_CTC_Without_Interrupt_Start(void);
void Timer0_ClearCompare_CTC_Without_Interrupt_Stop(void);
void Timer0_ClearCompare_CTC_Without_Interrupt_Delay(uint32_t delay, uint8_t ocr);
void Timer0_ClearCompare_CTC_With_Interrupt_Initialization(void);
void Timer0_ClearCompare_CTC_With_Interrupt_Start(void);
void Timer0_ClearCompare_CTC_With_Interrupt_Stop(void);
void Timer0_ClearCompare_CTC_With_Interrupt_Delay(uint32_t delay, uint8_t ocr);

void Timer0_Fast_PWM_Initialization(void);
void Timer0_Fast_PWM_NonInverting_SetDutyCycle(uint8_t duty);
void Timer0_Fast_PWM_Inverting_SetDutyCycle(uint8_t duty);

#endif /* TIMER0_H_ */