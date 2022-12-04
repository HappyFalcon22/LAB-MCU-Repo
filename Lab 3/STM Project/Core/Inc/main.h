/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_RED_X_Pin GPIO_PIN_1
#define LED_RED_X_GPIO_Port GPIOA
#define LED_RED_Y_Pin GPIO_PIN_2
#define LED_RED_Y_GPIO_Port GPIOA
#define LED_GREEN_X_Pin GPIO_PIN_3
#define LED_GREEN_X_GPIO_Port GPIOA
#define LED_GREEN_Y_Pin GPIO_PIN_4
#define LED_GREEN_Y_GPIO_Port GPIOA
#define LED_YELLOW_X_Pin GPIO_PIN_5
#define LED_YELLOW_X_GPIO_Port GPIOA
#define LED_YELLOW_Y_Pin GPIO_PIN_6
#define LED_YELLOW_Y_GPIO_Port GPIOA
#define SEG0_X_Pin GPIO_PIN_0
#define SEG0_X_GPIO_Port GPIOB
#define SEG1_X_Pin GPIO_PIN_1
#define SEG1_X_GPIO_Port GPIOB
#define SEG2_X_Pin GPIO_PIN_2
#define SEG2_X_GPIO_Port GPIOB
#define SEG3_Y_Pin GPIO_PIN_10
#define SEG3_Y_GPIO_Port GPIOB
#define SEG4_Y_Pin GPIO_PIN_11
#define SEG4_Y_GPIO_Port GPIOB
#define SEG5_Y_Pin GPIO_PIN_12
#define SEG5_Y_GPIO_Port GPIOB
#define SEG6_Y_Pin GPIO_PIN_13
#define SEG6_Y_GPIO_Port GPIOB
#define BUTTON_MODE_Pin GPIO_PIN_8
#define BUTTON_MODE_GPIO_Port GPIOA
#define BUTTON_INC_Pin GPIO_PIN_9
#define BUTTON_INC_GPIO_Port GPIOA
#define BUTTON_DEC_Pin GPIO_PIN_10
#define BUTTON_DEC_GPIO_Port GPIOA
#define BUTTON_SET_Pin GPIO_PIN_11
#define BUTTON_SET_GPIO_Port GPIOA
#define ENABLE0_Pin GPIO_PIN_12
#define ENABLE0_GPIO_Port GPIOA
#define ENABLE1_Pin GPIO_PIN_13
#define ENABLE1_GPIO_Port GPIOA
#define ENABLE2_Pin GPIO_PIN_14
#define ENABLE2_GPIO_Port GPIOA
#define ENABLE3_Pin GPIO_PIN_15
#define ENABLE3_GPIO_Port GPIOA
#define SEG3_X_Pin GPIO_PIN_3
#define SEG3_X_GPIO_Port GPIOB
#define SEG4_X_Pin GPIO_PIN_4
#define SEG4_X_GPIO_Port GPIOB
#define SEG5_X_Pin GPIO_PIN_5
#define SEG5_X_GPIO_Port GPIOB
#define SEG6_X_Pin GPIO_PIN_6
#define SEG6_X_GPIO_Port GPIOB
#define SEG0_Y_Pin GPIO_PIN_7
#define SEG0_Y_GPIO_Port GPIOB
#define SEG1_Y_Pin GPIO_PIN_8
#define SEG1_Y_GPIO_Port GPIOB
#define SEG2_Y_Pin GPIO_PIN_9
#define SEG2_Y_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
