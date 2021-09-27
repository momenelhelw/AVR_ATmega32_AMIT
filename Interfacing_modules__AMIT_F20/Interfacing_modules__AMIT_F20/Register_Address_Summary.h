/*
 * Register_Address_Summary.h
 
 *  Author: Cherry Hani
 */ 


#ifndef REGISTER_ADDRESS_SUMMARY_H_
#define REGISTER_ADDRESS_SUMMARY_H_

#define PORTA (*(volatile uint8_t*)(0x3B))	//Output register
#define DDRA  (*(volatile uint8_t*)(0x3A))	//Data direction register
#define PINA  (*(volatile uint8_t*)(0x39))	//input Register

#define PORTB (*(volatile uint8_t*)(0x38))	//Output register
#define DDRB  (*(volatile uint8_t*)(0x37))	//Data direction register
#define PINB  (*(volatile uint8_t*)(0x36))	//input Register

#define PORTC (*(volatile uint8_t*)(0x35))	//Output register
#define DDRC  (*(volatile uint8_t*)(0x34))	//Data direction register
#define PINC  (*(volatile uint8_t*)(0x33))	//input Register

#define PORTD (*(volatile uint8_t*)(0x32))	//Output register
#define DDRD  (*(volatile uint8_t*)(0x31))	//Data direction register
#define PIND  (*(volatile uint8_t*)(0x30))	//input Register


#endif /* REGISTER_ADDRESS_SUMMARY_H_ */