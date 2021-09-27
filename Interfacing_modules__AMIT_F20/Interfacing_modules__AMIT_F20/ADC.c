/*
* ADC.c

*  Author: Cherry Hani
*/
#include "ADC.h"

void ADC_Initialize(void)
{
	//Voltage reference
	#if ADC_Vref == ADC_AREF
	CLR_BIT(ADMUX, REFS1);CLR_BIT(ADMUX, REFS0);
	#elif ADC_Vref == ADC_AVCC
	CLR_BIT(ADMUX, REFS1);SET_BIT(ADMUX, REFS0);
	#elif ADC_Vref == ADC_Internal
	SET_BIT(ADMUX, REFS1);SET_BIT(ADMUX, REFS0);
	#endif
	//ADC read adjust, Choose right adjust
	CLR_BIT(ADMUX, ADLAR);
	//Select channel-1
	CLR_BIT(ADMUX, MUX4);CLR_BIT(ADMUX, MUX3);CLR_BIT(ADMUX, MUX2);CLR_BIT(ADMUX, MUX1);SET_BIT(ADMUX, MUX0);
	//ADC Auto trigger enable
	SET_BIT(ADCSRA, ADATE);
	//Prescaler
	SET_BIT(ADCSRA, ADPS2);SET_BIT(ADCSRA, ADPS1);SET_BIT(ADCSRA, ADPS0);
	//ADC enable
	SET_BIT(ADCSRA, ADEN);
}
uint16_t ADC_Read(void)
{
	uint16_t var = 0;//Create variable to read value 
	SET_BIT(ADCSRA, ADSC);//Start of conversion
	while(GET_BIT(ADCSRA, ADIF) != 1);//Wait until conversion finish
	var = ADC_DTA;//Read from output register
	return var;//return value
}