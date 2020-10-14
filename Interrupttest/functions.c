/*
 * functions.c
 *
 * Created: 02/10/2020 10:01:56 PM
 *  Author: Khalid El-Meshrefy
 */ 
#include <stdio.h>
#include <avr/io.h>
#include "functions.h"


int isPressedD (int pinNumber){
	if (PIND & (1<< pinNumber)){
		return 1;
	}else
	return 0;
}

void setPinD (int pinnumber) {
	PORTD |= (1<<pinnumber);

}
void resetPinD (int  pinnumber){
	PORTD &=~(1<<pinnumber);
}

void togglePinD (int  pinnumber){
	PORTD ^=(1<<pinnumber);
}

int isPressedA (int pinNumber){
	if (PINA & (1<< pinNumber)){
		return 1;
	}else
	return 0;
}

void setPinA (int pinnumber) {
	PORTA |= (1<<pinnumber);

}
void resetPinA (int  pinnumber){
	PORTA &=~(1<<pinnumber);
}

void togglePinA (int  pinnumber){
	PORTA ^=(1<<pinnumber);
}

int isPressedB (int pinNumber){
	if (PINB & (1<< pinNumber)){
		return 1;
	}else
	return 0;
}

void setPinB (int pinnumber) {
	PORTB |= (1<<pinnumber);

}
void resetPinB (int  pinnumber){
	PORTB &=~(1<<pinnumber);
}

void togglePinB (int  pinnumber){
	PORTB ^=(1<<pinnumber);
}

int isPressedC (int pinNumber){
	if (PINC & (1<< pinNumber)){
		return 1;
	}else
	return 0;
}

void setPinC (int pinnumber) {
	PORTC |= (1<<pinnumber);

}
void resetPinC (int  pinnumber){
	PORTC &=~(1<<pinnumber);
}

void togglePinC (int  pinnumber){
	PORTC ^=(1<<pinnumber);
}
void INT0_init(int mode){
	switch(mode){
		case AnylogicalMode :
		MCUCR |= (1<<ISC00) ;  // ANYLOGICAL CHANGE.
		break;
		
		case RisingMode :
		MCUCR |= (1<<ISC01)|(1<<ISC00) ;  // Rising
		break;
		
		case FallingMode :
		MCUCR |= (1<<ISC01) ;  // Falling
		break;
		
		case  LowlevelMode:
		break;
	}
	GICR |= (1<<INT0);/* Int0 enable*/



}
void INT1_init(int mode){
	switch(mode){
		case AnylogicalMode :
		MCUCR |= (1<<ISC10) ;  // ANYLOGICAL CHANGE.
		break;
		
		case RisingMode :
		MCUCR |= (1<<ISC10)|(1<<ISC11) ;  // Rising
		break;
		
		case FallingMode :
		MCUCR |= (1<<ISC11) ;  // Falling
		break;
		
		case  LowlevelMode:
		break;
	}
	GICR |= (1<<INT1);/* Int0 enable*/



}
void INT2_init(int mode){
	switch(mode){

		
		case RisingMode :
		MCUCSR |= (1<<ISC2);  // Rising
		break;
		
		case FallingMode :
		MCUCSR &=~(1<<ISC2) ;  // Falling
		break;
		
		
	}
	GICR |= (1<<INT2);/* Int2 enable*/



}



