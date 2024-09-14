/*
 * exercise8.c
 *
 *  Created on: Sep 13, 2024
 *      Author: USER
 */

#include "exercise8.h"

int number = 0;

void init_exercise8() {
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, RESET); //L1
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, RESET); //L2
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, RESET); //L3
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET); //L4
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET); //L5
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET); //L6
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, RESET); //L7
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, RESET); //L8
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, RESET); //L9
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, RESET); //10
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, RESET); //11
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, RESET); //12
}
void exercise8_run() {
	setNumberOnClock(number);

}

void setNumberOnClock(int num) {
	switch (num) {
	case 0:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, SET); //L0
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, SET); //L1
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET); //L2
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET); //L3
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET); //L4
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, SET); //L5
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, SET); //L6
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, SET); //L7
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, SET); //L8
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, SET); //L9
		break;
	case 10:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, SET); //L10
		break;
	case 11:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, SET); //L11
		break;
	}

}
;
