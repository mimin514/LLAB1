/*
 * led.h
 *
 *  Created on: Sep 10, 2024
 *      Author: User
 */

#ifndef INC_LED_H_
#define INC_LED_H_
#include "main.h"

void led_init(void);
void led_run(void);
void led_round(void);

void clearAllClock(void);
void setNumberOnClock(int num);
void clearNumberOnClock(int num);

#endif /* INC_LED_H_ */
