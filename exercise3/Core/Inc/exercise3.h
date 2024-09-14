/*
 * exercise3.h
 *
 *  Created on: Sep 13, 2024
 *      Author: USER
 */

#ifndef INC_EXERCISE3_H_
#define INC_EXERCISE3_H_

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

void init_exercise3();
void exercise3_run();

#endif /* INC_EXERCISE3_H_ */
