/*
 * pwm.h
 *
 *  Created on: Feb 26, 2022
 *      Author: hp
 */

#ifndef SOURCE_PWM_H_
#define SOURCE_PWM_H_
#include "../../std_types.h"
#include "avr/io.h"
//#include "avr/iom16.h"
/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
void PWM_Timer2_Start(uint8 duty_cycle);

#endif /* SOURCE_PWM_H_ */
