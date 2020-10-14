/*
* cw_cww_leds_withbuttons.c
*
* Created: 02/10/2020 09:51:25 PM
* Author : Khalid Elmeshrefy
*/
#include <stdio.h>
#include <avr/io.h>
#define  F_CPU 16000000UL
#include <util/delay.h>
#include "functions.h"
#include <avr/interrupt.h>

ISR(INT0_vect){
	static int rising=1;
	if (rising==1){
		PORTA=0x05;
		rising=0;
		} else{
		PORTA=0x00;
		rising=1;
	}
}

ISR(INT2_vect){
	static int rising=1;
	if (rising==1){
		PORTA=0x07;
		rising=0;
		} else{
		PORTA=0x00;
		rising=1;
	}
}


int main(void)
{
	DDRA=0XFF;
		
	INT0_init(AnylogicalMode);
	INT2_init(RisingMode);
	/* General interrupt enable*/
	sei();


	while (1)
	{
	}
}

