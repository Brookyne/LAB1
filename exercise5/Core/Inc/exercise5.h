/*
 * exercise5.h
 *
 *  Created on: Sep 13, 2024
 *      Author: USER
 */

#ifndef INC_EXERCISE5_H_
#define INC_EXERCISE5_H_

#include "main.h"
typedef enum {
	redhorizontal_state, yellowhorizontal_state, greenhorizontal_state,
} LEDhorizontalstate;
typedef enum {
	redvertical_state, yellowvertical_state, greenvertical_state,
} LEDverticalstate;
typedef enum {
	horizontal_state, vertical_state,
} Waystate;
void display7SEG_Horizontal(int num);
void display7SEG_VERTICAL(int num);
void init_exercise5();
void exercise5_run();

#endif /* INC_EXERCISE5_H_ */
