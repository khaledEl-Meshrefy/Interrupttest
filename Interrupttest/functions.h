/*
 * functions.h
 *
 * Created: 02/10/2020 10:01:27 PM
 *  Author: Khalid Elmeshrefy
 */ 


#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_





#endif /* FUNCTIONS_H_ */
#define  RisingMode 0
#define  FallingMode 1
#define  AnylogicalMode 2
#define  LowlevelMode 3

int isPressedA (int pinNumber);
void setPinA (int pinnumber);
void resetPinA (int  pinnumber);
void togglePinA (int  pinnumber);

int isPressedB (int pinNumber);
void setPinB (int pinnumber);
void resetPinB (int  pinnumber);
void togglePinB (int  pinnumber);

int isPressedC (int pinNumber);
void setPinC (int pinnumber);
void resetPinC (int  pinnumber);
void togglePinC (int  pinnumber);

int isPressedD (int pinNumber);
void setPinD (int pinnumber);
void resetPinD (int  pinnumber);
void togglePinD (int pinnumber);
void INT0_init(int mode);
void INT1_init(int mode);
void INT2_init(int mode);