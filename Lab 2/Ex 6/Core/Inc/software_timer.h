/*
 * SOFTWARETIMER.h
 *
 *  Created on: Oct 19, 2022
 *      Author: WELCOME
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int EN_flag;
extern int LED_flag;

void setTimer_EN(int duration);
void setTimer_LED(int duration);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
