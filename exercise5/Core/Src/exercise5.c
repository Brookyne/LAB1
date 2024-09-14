/*
 * exercise5.c
 *
 *  Created on: Sep 13, 2024
 *      Author: USER
 */

#include "exercise5.h"
int count = 0;
Waystate current_WayState = horizontal_state;
LEDhorizontalstate current_LEDStateHorizontal = greenhorizontal_state;
LEDverticalstate current_LEDStateVertical = greenvertical_state;
int countTimeHorizontal = 5;
int countTimeVertical = 3;
void display7SEG_Horizontal(int num) {
	switch (num) {
	case 0:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, SET);

		break;
	case 2:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET); //0
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET); //1
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, SET); //2
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, RESET); //3
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, RESET); //4
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, SET); //5
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, RESET); //6
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET); //0
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET); //1
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, RESET); //2
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, RESET); //3
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, SET); //4
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, SET); //5
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, RESET); //6
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET); //0
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET); //1
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, RESET); //2
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, SET); //3
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, SET); //4
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, RESET); //5
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, RESET); //6
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET); //0
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, SET); //1
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, RESET); //2
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, RESET); //3
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, SET); //4
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, RESET); //5
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, RESET); //6
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET); //0
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, SET); //1
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, RESET); //2
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, RESET); //3
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, RESET); //4
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, RESET); //5
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, RESET); //6
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET); //0
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET); //1
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, RESET); //2
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, SET); //3
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, SET); //4
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, SET); //5
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, SET); //6
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET); //0
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET); //1
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, RESET); //2
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, RESET); //3
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, RESET); //4
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, RESET); //5
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, RESET); //6
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET); //0
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET); //1
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, RESET); //2
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, RESET); //3
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, SET); //4
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, RESET); //5
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, RESET); //6

		break;
	}
}
;
void display7SEG_VERTICAL(int num) {
	switch (num) {
	case 0:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, RESET); //0
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, RESET); //1
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, RESET); //2
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, RESET); //3
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, RESET); //4
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, RESET); //5
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, SET); //6
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, SET); //0
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, RESET); //1
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, RESET); //2
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, SET); //3
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, SET); //4
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, SET); //5
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, SET); //6
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, RESET); //0
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, RESET); //1
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, SET); //2
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, RESET); //3
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, RESET); //4
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, SET); //5
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, RESET); //6
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, RESET); //0
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, RESET); //1
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, RESET); //2
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, RESET); //3
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, SET); //4
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, SET); //5
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, RESET); //6
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, SET); //0
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, RESET); //1
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, RESET); //2
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, SET); //3
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, SET); //4
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, RESET); //5
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, RESET); //6
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, RESET); //0
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, SET); //1
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, RESET); //2
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, RESET); //3
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, SET); //4
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, RESET); //5
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, RESET); //6
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, RESET); //0
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, SET); //1
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, RESET); //2
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, RESET); //3
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, RESET); //4
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, RESET); //5
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, RESET); //6
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, RESET); //0
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, RESET); //1
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, RESET); //2
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, SET); //3
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, SET); //4
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, SET); //5
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, SET); //6
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, RESET); //0
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, RESET); //1
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, RESET); //2
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, RESET); //3
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, RESET); //4
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, RESET); //5
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, RESET); //6
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, RESET); //0
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, RESET); //1
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, RESET); //2
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, RESET); //3
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, SET); //4
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, RESET); //5
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, RESET); //6

		break;
	}
}
;
void init_exercise5() {
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, RESET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, RESET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, RESET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, RESET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, RESET);
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
void exercise5_run() {
	switch (current_WayState) {
	case horizontal_state:
		display7SEG_Horizontal(countTimeHorizontal--);
		//					countTimeHorizontal--;
		display7SEG_VERTICAL(countTimeVertical--);
		if (countTimeHorizontal >= 0) {
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
			//						display7SEG_Horizontal(countTimeHorizontal);

			switch (current_LEDStateVertical) {
			case greenvertical_state:
				if (countTimeVertical >= 0) {
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET);
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, RESET);
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);

					if (countTimeVertical == 0) {
						countTimeVertical = 2;
						current_LEDStateVertical = yellowvertical_state;
					}

				}
				break;
			case yellowvertical_state:
				if (countTimeVertical >= 0) {
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET);
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
					if (countTimeVertical == 0) {
						countTimeVertical = 5;
						current_LEDStateVertical = greenvertical_state;
					}
				}
				break;
			case redvertical_state:

				break;
			}

			if (countTimeHorizontal == 0) {

				countTimeHorizontal = 3;
				current_WayState = vertical_state;
			}
		}

		break;
	case vertical_state:

		display7SEG_Horizontal(countTimeHorizontal--);
		//					countTimeHorizontal--;
		display7SEG_VERTICAL(countTimeVertical--);
		if (countTimeVertical >= 0) {
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);

			switch (current_LEDStateHorizontal) {
			case greenhorizontal_state:
				if (countTimeHorizontal >= 0) {
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, SET);
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, RESET);
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);

					if (countTimeHorizontal == 0) {
						countTimeHorizontal = 2;
						current_LEDStateHorizontal = yellowhorizontal_state;
					}

				}
				break;
			case yellowhorizontal_state:
				if (countTimeHorizontal >= 0) {
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, SET);
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET);
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, RESET);
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
					if (countTimeHorizontal == 0) {
						countTimeHorizontal = 5;
						current_LEDStateHorizontal = greenhorizontal_state;
					}
				}
				break;
			case redhorizontal_state:
				break;
			}

			if (countTimeVertical == 0) {
				countTimeVertical = 3;
				current_WayState = horizontal_state;
			}
		}
		break;

	}
}
