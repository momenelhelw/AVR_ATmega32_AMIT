/*
 * CPU_Configuration.h
 *  Author: Cherry Hani
 */ 


#ifndef CPU_CONFIGURATION_H_
#define CPU_CONFIGURATION_H_


#undef F_CPU				//Undefined internal oscillator
#define F_CPU 16000000		//Defined external oscillator
#include <avr/io.h>			//Defined I/O for this MC
#include <avr/interrupt.h>  //Defined interrupts for AVR controller
#include <util/delay.h>		//Defined built-in delay function
#include "BIT_MATH.h"
#include "DIO.h"
#include "S7SEG.h"

#endif /* CPU_CONFIGURATTION_H_ */