/*
 * OS_Scheduler.c

 *  Author: Cherry Hani
 */ 

#include "OS_Scheduler.h"

TASK array[3] = {
	{2, checkBtn1},
	{3, checkBtn2},
	{5, displayRes}
};

uint8_t OS_TICK = 0;

void scheduler(void)
{
	uint8_t i;
	for (i = 0; i < NO_OF_TASKS; i++)
	{
		if ((OS_TICK % array[i].periodicity) == 0)
		{
			array[i].ptr();
		}
	}
}

