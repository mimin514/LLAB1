/*
 * led.c
 *
 *  Created on: Sep 10, 2024
 *      Author: User
 */

#include "led.h"

  int count=0;
  void led_run(void){
	      if (count <= 5) {
	    	  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin,1) ;
	    	  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin,0) ;

	    	  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin,1) ;
	    	  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin,0) ;
	      } else if (count <= 8) {
	    	  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin,1) ;
	    	  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin,0) ;

	    	  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin,1) ;
	    	  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin,0) ;
	      } else if (count <= 10) {
	    	  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin,1) ;
	    	  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin,0) ;
	      } else if (count <= 13){
	    	  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin,1) ;
	    	  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin,0) ;

	      }else count = 0;

	      count++;
	      HAL_Delay(700);

	  //}
}
