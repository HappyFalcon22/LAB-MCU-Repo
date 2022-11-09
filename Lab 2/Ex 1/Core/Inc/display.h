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

void clear7SEG();
void display7SEG(int num);
void blinkLED();
void changeEN();

#endif /* INC_DISPLAY_H_ */
