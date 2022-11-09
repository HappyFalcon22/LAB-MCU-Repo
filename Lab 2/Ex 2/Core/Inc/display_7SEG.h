/*
 * LED.h
 *
 *  Created on: Oct 19, 2022
 *      Author: WELCOME
 */

#ifndef INC_DISPLAY_7SEG_H_
#define INC_DISPLAY_7SEG_H_

#include "main.h"

extern int ENstatus;

void clear7SEG();
void display7SEG(int num);
void blink_led();
void change_enable();

#endif /* INC_DISPLAY_7SEG_H_ */
