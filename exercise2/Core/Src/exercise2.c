/*
 * exercise2.c
 *
 *  Created on: Sep 13, 2024
 *      Author: USER
 */

#include "exercise2.h"
state currentState = red_state;
int countTime = 0;
int flag = 0;
void init_exercise2() {
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
}
void exercise2_run() {
	switch (currentState) {
	case red_state:
		countTime += 1000;
		if (countTime <= 5000) {
			//				HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
			//				HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
			//				HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, RESET);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
			if (countTime == 5000) {
				countTime = 0;
				currentState = yellow_state;
			}
		}

		break;
	case yellow_state:
		countTime += 1000;
		if (countTime <= 2000) {
			//				HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
			//				HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
			//				HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, SET);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, RESET);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
			if (countTime == 2000) {
				countTime = 0;
				currentState = green_state;
			}
		}

		break;
	case green_state:
		countTime += 1000;
		if (countTime <= 3000) {
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
			if (countTime == 3000) {
				countTime = 0;
				currentState = red_state;
			}
		}

		break;
	}

}
