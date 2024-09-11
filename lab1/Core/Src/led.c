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
	  HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin,0) ;
	  HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin,0) ;
	  HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin,0) ;
	  HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin,0) ;
	  HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin,0) ;
	  HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin,0) ;

}
void led_red_on_doc(void){
	  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin,1) ;
	  HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin,1) ;
}
void led_red_off_doc(void){
	  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin,0) ;
	  HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin,0) ;
}
void led_yellow_on_doc(void){
	  HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin,1) ;
	  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin,1) ;
}
void led_yellow_off_doc(void){
	  HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin,0) ;
	  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin,0) ;
}
void led_green_on_doc(void){
	  HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin,1) ;
	  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin,1) ;
}
void led_green_off_doc(void){
	  HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin,0) ;
	  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin,0) ;
}
void led_red_on_ng(void){
	  HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin,1) ;
	  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin,1) ;
}
void led_red_off_ng(void){
	  HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin,0) ;
	  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin,0) ;
}
void led_yellow_on_ng(void){
	  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin,1) ;
	  HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin,1) ;
}
void led_yellow_off_ng(void){
	  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin,0) ;
	  HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin,0) ;
}
void led_green_on_ng(void){
	  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin,1) ;
	  HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin,1) ;
}
void led_green_off_ng(void){
	  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin,0) ;
	  HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin,0) ;
}
  void led_run(void){
	      if (count <= 5) {
	    	  led_red_on_doc();
	    	  led_yellow_off_doc();

	    	  led_green_on_ng();
	    	  led_red_off_ng();
	      } else if (count <= 8) {
	    	  led_green_on_doc();
	    	  led_red_off_doc();

	    	  led_yellow_on_ng();
	    	  led_green_off_ng();
	      } else if (count <= 10) {
	      	  led_red_on_ng();
	      	  led_yellow_off_ng();
	      } else if (count <= 13){
	    	  led_yellow_on_doc();
	    	  led_green_off_doc();

	      }else count = 0;

	      count++;
	      HAL_Delay(700);

	  //}
}
  void led_round(void){
	  switch (count){
	  case 0:
		  HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin,0) ;
		  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin,1) ;
		  break;
	  case 1:
		  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin,0) ;
		  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin,1) ;
		  break;
	  case 2:
		  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin,0) ;
		  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin,1) ;
		  break;
	  case 3:
		  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin,0) ;
		  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin,1) ;
		  break;
	  case 4:
		  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin,0) ;
		  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin,1) ;
		  break;
	  case 5:
		  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin,0) ;
		  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin,1) ;
		  break;
	  case 6:
		  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin,0) ;
		  HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin,1) ;
		  break;
	  case 7:
		  HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin,0) ;
		  HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin,1) ;
		  break;
	  case 8:
		  HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin,0) ;
		  HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin,1) ;
		  break;
	  case 9:
		  HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin,0) ;
		  HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin,1) ;
		  break;
	  case 10:
		  HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin,0) ;
		  HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin,1) ;
		  break;
	  case 11:
		  HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin,0) ;
		  HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin,1) ;
		  break;
	  default:
		  break;
	  }
	  count++;
	  if (count==12) count=0;
  }
