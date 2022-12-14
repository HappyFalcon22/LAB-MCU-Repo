/*
 * LED.h
 *
 *  Created on: Oct 19, 2022
 *      Author: WELCOME
 */

#ifndef INC_DISPLAY_H_
#define INC_DISPLAY_H_

#include "main.h"

extern int ENstatus;
extern const int MAX_LED;
extern int index_led;
extern int led_buffer[4];
extern int hour, minute, second;

void clear7SEG();
void display7SEG(int num);
void blinkLED();
void changeEN();
void update7SEG(int index);
void updateClockBuffer();

#endif /* INC_DISPLAY_H_ */