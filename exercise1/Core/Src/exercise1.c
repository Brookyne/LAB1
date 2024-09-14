/*
 * exercise1.c
 *
 *  Created on: Sep 13, 2024
 *      Author: USER
 */

#include "exercise1.h"
int flag = 0;
void init_exercise1() {
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
}
void exercise1_run() {

	if (flag) {
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	} else {
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	}
	HAL_Delay(2000);
	if (flag) {
		flag = 0;
	} else {
		flag = 1;
	}
}
