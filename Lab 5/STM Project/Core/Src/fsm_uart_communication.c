/*
 * fsm_uart_communication.c
 *
 *  Created on: Dec 8, 2022
 *      Author: Admin
 */
#include "global.h"

uint32_t temp_ADC_value = 0;

void uart_communication_fsm()
{
	switch(state_uart)
	{
	case INIT_UART:;
		if (parse_flag == 1)
		{
			parse_flag = 0;
			state_uart = DATA;
			break;
		}
		break;
	case DATA:;
		switch(cmd)
		{
		case none:
			break;
		case RST:
			// Read ADC_Value
			temp_ADC_value = HAL_ADC_GetValue(&hadc1);
			ADC_value = temp_ADC_value;
			char str1[100];
			HAL_UART_Transmit(&huart2, (void *) str1, sprintf(str1, "!ADC=%d#\r\n", ADC_value), 1000);
			// To STANDBY state
			state_uart = STANDBY;
			setTimer(UART_TIMEOUT);
			break;
		case OK:;
			// End communication
			char str2[] = "Communication End\r\n";
			HAL_UART_Transmit(&huart2, str2, sizeof(str2), 1000);
			state_uart = INIT_UART;
			break;
		default:
			break;
		}
		break;
	case STANDBY:;
		// Timeout
		if (timer_flag == 1)
		{
			setTimer(UART_TIMEOUT);
			// Print the old value
			char str[100];
			HAL_UART_Transmit(&huart2, (void *) str, sprintf(str, "!ADC=%d#\r\n", temp_ADC_value), 1000);
			break;
		}
		if (parse_flag == 1)
		{
			state_uart = DATA;
			parse_flag = 0;
			break;
		}
		break;
	default:
		break;
	}
}
