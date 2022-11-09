/*
 * LED.h
 *
 *  Created on: Oct 19, 2022
 *      Author: WELCOME
 */

#ifndef INC_DISPLAY_H_
#define INC_DISPLAY_H_

#include "main.h"

extern int hour;
extern int minute;
extern int second;

void clear7SEG();
void updateClock();
void display7SEG(int num);
void initState();
void clearEN();
void openEN(int state);
void displayClock(int hour, int minute);
void blinkLED();
void updateClockBuffer();
void update7SEG(int index);
#endif /* INC_DISPLAY_H_ */
