/*
 * software_timer.c
 *
 *  Created on: Dec 8, 2022
 *      Author: Admin
 */

#include "global.h"

int timer_flag = 0;
int timer_counter = 0;

void setTimer(int duration)
{
	timer_counter = duration / CLOCK_TICK;
	timer_flag = 0;
}

void timerRun()
{
	if (timer_counter > 0)
	{
		timer_counter--;
		if (timer_counter <= 0)
			timer_flag = 1;
	}
}

