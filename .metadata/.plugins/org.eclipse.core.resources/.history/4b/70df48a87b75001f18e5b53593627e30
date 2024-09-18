/*
 * led.c
 *
 *  Created on: Sep 10, 2024
 *      Author: User
 */

#include "led.h"

  int count=0;
void led_init(void)
  {
	  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin,0) ;
	  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin,0) ;
	  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin,0) ;
	  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin,0) ;
	  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin,0) ;
	  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin,0) ;


}
void led_red_on_doc(void){
	  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin,1) ;
}
void led_red_off_doc(void){
	  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin,0) ;
}
void led_yellow_on_doc(void){
	  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin,1) ;
}
void led_yellow_off_doc(void){
	  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin,0) ;
}
void led_green_on_doc(void){
	  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin,1) ;
}
void led_green_off_doc(void){
	  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin,0) ;
}
void led_red_on_ng(void){
	  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin,1) ;
}
void led_red_off_ng(void){
	  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin,0) ;
}
void led_yellow_on_ng(void){
	  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin,1) ;
}
void led_yellow_off_ng(void){
	  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin,0) ;
}
void led_green_on_ng(void){
	  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin,1) ;
}
void led_green_off_ng(void){
	  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin,0) ;
}
  void led_run(void){
	      if (count <= 5) {
	    	  led_red_on_doc();
	    	  led_yellow_off_doc();

	    	  led_green_on_ng();
	    	  led_red_off_ng();
	      } else if (count <= 9) {
	    	  led_green_on_doc();
	    	  led_red_off_doc();

	    	  led_yellow_on_ng();
	    	  led_green_off_ng();
	      } else if (count <= 11) {
	      	  led_red_on_ng();
	      	  led_yellow_off_ng();
	      } else if (count <= 15){
	    	  led_yellow_on_doc();
	    	  led_green_off_doc();

	      }else count = 0;

	      count++;
	      //HAL_Delay(700);

	  //}
}
