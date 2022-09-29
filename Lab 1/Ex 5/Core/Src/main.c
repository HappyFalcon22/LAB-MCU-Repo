/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */

	int count1 = 0, count2 = 0;
	void LED_RED1_toggle()
	{
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, SET);
	}
	void LED_GREEN1_toggle()
	{
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, RESET);
	}
	void LED_YELLOW1_toggle()
	{
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, SET);
	}
	void LED_RED2_toggle()
	{
	HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
	}
	void LED_GREEN2_toggle()
	{
	HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, RESET);
	}
	void LED_YELLOW2_toggle()
	{
	HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
	}
	void display7SEG1(int num)
	{
		switch(num)
		{
		case 0:
			HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, SET);
			HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, SET);
			HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, SET);
			HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, SET);
			HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, SET);
			HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, SET);
			HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, SET);
			HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, SET);
			HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, SET);
			HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, SET);
			HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, SET);
			HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, SET);
			HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, SET);
			HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, SET);
			HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, SET);
			HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, SET);
			HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, SET);
			HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, SET);
			HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, RESET);
			break;
		}
	}
	void display7SEG2(int num)
	{
		switch(num)
		{
		case 0:
			HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, SET);
			HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, SET);
			HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, SET);
			HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, SET);
			HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, SET);
			HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, SET);
			HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, SET);
			HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, SET);
			HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, SET);
			HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, SET);
			HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, SET);
			HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, SET);
			HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, SET);
			HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, SET);
			HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, SET);
			HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, SET);
			HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, SET);
			HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, SET);
			HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, RESET);
			break;
		}
	}
	while (1)
	{
	  // For counter 1
	  if ((count1 >= 0) && (count1 < 5))
	  {
		  display7SEG1(5 - count1);
		  LED_RED1_toggle();
	  }
	  if ((count1 >= 5) && (count1 < 8))
	  {
		  display7SEG1(8 - count1);
		  LED_GREEN1_toggle();
	  }
	  if ((count1 >= 8) && (count1 < 10))
	  {
		  display7SEG1(10 - count1);
		  LED_YELLOW1_toggle();
	  }
	  // For counter 2
	  if ((count2 >= 0) && (count2 < 3))
	  {
		  display7SEG2(3 - count2);
		  LED_GREEN2_toggle();
	  }
	  if ((count2 >= 3) && (count2 < 5))
	  {
		  display7SEG2(5 - count2);
		  LED_YELLOW2_toggle();
	  }
	  if ((count2 >= 5) && (count2 < 10))
	  {
		  LED_RED2_toggle();
		  display7SEG2(10 - count2);
	  }
	  // Add count indexes
	  count1++; count2++;
	  if (count1 >= 10)
	  {
		  count1 = 0;
	  }
	  if (count2 >= 10)
	  {
		  count2 = 0;
	  }
	  HAL_Delay(1000);
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
	}
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED_RED1_Pin|LED_YELLOW1_Pin|LED_GREEN1_Pin|LED_RED2_Pin
                          |LED_YELLOW2_Pin|LED_GREEN2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, SEG_A1_Pin|SEG_B1_Pin|SEG_C1_Pin|SEG_C2_Pin
                          |SEG_D2_Pin|SEG_E2_Pin|SEG_F2_Pin|SEG_G2_Pin
                          |SEG_D1_Pin|SEG_E1_Pin|SEG_F1_Pin|SEG_G1_Pin
                          |SEG_A2_Pin|SEG_B2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_RED1_Pin LED_YELLOW1_Pin LED_GREEN1_Pin LED_RED2_Pin
                           LED_YELLOW2_Pin LED_GREEN2_Pin */
  GPIO_InitStruct.Pin = LED_RED1_Pin|LED_YELLOW1_Pin|LED_GREEN1_Pin|LED_RED2_Pin
                          |LED_YELLOW2_Pin|LED_GREEN2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : SEG_A1_Pin SEG_B1_Pin SEG_C1_Pin SEG_C2_Pin
                           SEG_D2_Pin SEG_E2_Pin SEG_F2_Pin SEG_G2_Pin
                           SEG_D1_Pin SEG_E1_Pin SEG_F1_Pin SEG_G1_Pin
                           SEG_A2_Pin SEG_B2_Pin */
  GPIO_InitStruct.Pin = SEG_A1_Pin|SEG_B1_Pin|SEG_C1_Pin|SEG_C2_Pin
                          |SEG_D2_Pin|SEG_E2_Pin|SEG_F2_Pin|SEG_G2_Pin
                          |SEG_D1_Pin|SEG_E1_Pin|SEG_F1_Pin|SEG_G1_Pin
                          |SEG_A2_Pin|SEG_B2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
