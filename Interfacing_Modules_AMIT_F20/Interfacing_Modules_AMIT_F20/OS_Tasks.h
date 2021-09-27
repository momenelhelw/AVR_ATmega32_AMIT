/*
 * OS_Tasks.h

 *  Author: Cherry Hani
 */ 


#ifndef OS_TASKS_H_
#define OS_TASKS_H_

#include "CPU_Configurations.h"

typedef struct
{
	uint8_t periodicity;
	void (*ptr) (void);
}TASK;

void checkBtn1(void);
void checkBtn2(void);
void displayRes(void);

#endif /* OS_TASKS_H_ */