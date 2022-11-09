/*
 * LED.c
 *
 *  Created on: Oct 19, 2022
 *      Author: WELCOME
 */

#include "display_7SEG.h"

int ENstatus = 0;

/* 7SEGMENT Fuction */
void clear7SEG(){
	HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG1_Pin | SEG2_Pin |
			SEG3_Pin | SEG4_Pin | SEG5_Pin | SEG6_Pin, 1);
}
void display7SEG(int num){
	if(num >= 0 && num < 10){
		switch (num) {
			case 0:
				HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG1_Pin | SEG2_Pin |
										 SEG3_Pin | SEG4_Pin | SEG5_Pin, 0);
				break;
			case 1:
				HAL_GPIO_WritePin(GPIOB, SEG1_Pin | SEG2_Pin, 0);
				break;
			case 2:
				HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG1_Pin | SEG3_Pin |
										 SEG4_Pin | SEG6_Pin, 0);
				break;
			case 3:
				HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG1_Pin | SEG2_Pin |
										 SEG3_Pin | SEG6_Pin, 0);
				break;
			case 4:
				HAL_GPIO_WritePin(GPIOB, SEG1_Pin | SEG2_Pin |
										 SEG5_Pin | SEG6_Pin, 0);
				break;
			case 5:
				HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG2_Pin |
										 SEG3_Pin | SEG5_Pin | SEG6_Pin, 0);
				break;
			case 6:
				HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG2_Pin | SEG3_Pin |
										 SEG4_Pin | SEG5_Pin | SEG6_Pin, 0);
				break;
			case 7:
				HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG1_Pin | SEG2_Pin, 0);
				break;
			case 8:
				HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG1_Pin | SEG2_Pin |
										 SEG3_Pin | SEG4_Pin | SEG5_Pin | SEG6_Pin, 0);
				break;
			case 9:
				HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG1_Pin | SEG2_Pin |
										 SEG3_Pin | SEG5_Pin | SEG6_Pin, 0);
				break;
		}
	}
}

/* Blink Led */
void blink_led()
{
  HAL_GPIO_TogglePin(GPIOA, LED_RED_Pin);
  HAL_GPIO_TogglePin(GPIOA, DOT_Pin);
}

/* EN GPIO control */
void change_enable()
{
  switch (ENstatus) {
	case 0:
	  ENstatus = 1;
	  clear7SEG();
	  display7SEG(1);
	  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
	  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
	  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
	  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
	  break;
	case 1:
	  ENstatus = 2;
	  clear7SEG();
	  display7SEG(2);
	  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
	  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
	  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
	  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
	  break;
	case 2:
	  ENstatus = 3;
	  clear7SEG();
	  display7SEG(3);
	  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
	  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
	  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
	  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
	  break;
	case 3:
	  ENstatus = 0;
	  clear7SEG();
	  display7SEG(0);
	  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
	  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
	  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
	  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
	  break;
	default:
	  break;
  }
}


