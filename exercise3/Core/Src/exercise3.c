/*
 * exercise3.c
 *
 *  Created on: Sep 13, 2024
 *      Author: USER
 */

#include "exercise3.h"
Waystate current_WayState = horizontal_state;
LEDhorizontalstate current_LEDStateHorizontal = greenhorizontal_state;
LEDverticalstate current_LEDStateVertical = greenvertical_state;
int countTimeHorizontal = 0;
int countTimeVertical = 0;
void init_exercise3() {
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, RESET);
}
void exercise3_run() {
	switch (current_WayState) {
	case horizontal_state:
		countTimeHorizontal++;
		countTimeVertical++;
		if (countTimeHorizontal <= 5) {
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);

			switch (current_LEDStateVertical) {
			case greenvertical_state:
				if (countTimeVertical <= 3) {
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET);
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, RESET);
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
					if (countTimeVertical == 3) {
						countTimeVertical = 0;
						current_LEDStateVertical = yellowvertical_state;
					}

				}
				break;
			case yellowvertical_state:
				if (countTimeVertical <= 2) {
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET);
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
					if (countTimeVertical == 2) {
						countTimeVertical = 0;
						current_LEDStateVertical = greenvertical_state;
					}
				}
				break;
			case redvertical_state:
				break;
			}
			if (countTimeHorizontal == 5) {

				countTimeHorizontal = 0;
				current_WayState = vertical_state;
			}
		}
		break;
	case vertical_state:

		countTimeHorizontal++;
		countTimeVertical++;
		if (countTimeVertical <= 5) {
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);

			switch (current_LEDStateHorizontal) {
			case greenhorizontal_state:
				if (countTimeHorizontal <= 3) {
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, SET);
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, RESET);
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);

					if (countTimeHorizontal == 3) {
						countTimeHorizontal = 0;
						current_LEDStateHorizontal = yellowhorizontal_state;
					}
				}
				break;
			case yellowhorizontal_state:
				if (countTimeHorizontal <= 2) {
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, SET);
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET);
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, RESET);
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
					if (countTimeHorizontal == 2) {
						countTimeHorizontal = 0;
						current_LEDStateHorizontal = greenhorizontal_state;
					}
				}
				break;
			case redhorizontal_state:
				break;
			}
			if (countTimeVertical == 5) {
				countTimeVertical = 0;
				current_WayState = horizontal_state;
			}
		}
		break;

	}
}
