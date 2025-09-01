/*
 * keypad_4x4.c
 *
 *  Created on: Jan 15, 2025
 *      Author: enzof
 */


#include "keypad_4x4.h"
#include "stm32f1xx_hal.h"

#define row	GPIOA
#define col GPIOA

// set as GPIO OUTPUT
#define r1 	GPIO_PIN_1
#define r2	GPIO_PIN_2
#define r3	GPIO_PIN_3
#define r4	GPIO_PIN_4

// make sure to pulled up your column pins in IOC
// SET AS GPIO INPUT
#define c1 	GPIO_PIN_5
#define c2	GPIO_PIN_6
#define c3	GPIO_PIN_7
#define c4	GPIO_PIN_8


unsigned char keypress(void){

	//////////////  FOR ROW 1  //////////////////

	HAL_GPIO_WritePin(row, r1, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(row, r2 | r3 | r4, GPIO_PIN_SET);

	if(HAL_GPIO_ReadPin(col, c1) == 0){ while(HAL_GPIO_ReadPin(col, c1) == 0); return '1'; }
	if(HAL_GPIO_ReadPin(col, c2) == 0){ while(HAL_GPIO_ReadPin(col, c2) == 0); return '2'; }
	if(HAL_GPIO_ReadPin(col, c3) == 0){ while(HAL_GPIO_ReadPin(col, c3) == 0); return '3'; }
	if(HAL_GPIO_ReadPin(col, c4) == 0){ while(HAL_GPIO_ReadPin(col, c4) == 0); return 'A'; }

	HAL_Delay(80);

	//////////////  FOR ROW 2  //////////////////

	HAL_GPIO_WritePin(row, r2, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(row, r1 | r3 | r4, GPIO_PIN_SET);

	if(HAL_GPIO_ReadPin(col, c1) == 0){ while(HAL_GPIO_ReadPin(col, c1) == 0); return '4'; }
	if(HAL_GPIO_ReadPin(col, c2) == 0){ while(HAL_GPIO_ReadPin(col, c2) == 0); return '5'; }
	if(HAL_GPIO_ReadPin(col, c3) == 0){ while(HAL_GPIO_ReadPin(col, c3) == 0); return '6'; }
	if(HAL_GPIO_ReadPin(col, c4) == 0){ while(HAL_GPIO_ReadPin(col, c4) == 0); return 'B'; }

	HAL_Delay(80);

	//////////////  FOR ROW 3  //////////////////

	HAL_GPIO_WritePin(row, r3, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(row, r1 | r2 | r4, GPIO_PIN_SET);

	if(HAL_GPIO_ReadPin(col, c1) == 0){ while(HAL_GPIO_ReadPin(col, c1) == 0); return '7'; }
	if(HAL_GPIO_ReadPin(col, c2) == 0){ while(HAL_GPIO_ReadPin(col, c2) == 0); return '8'; }
	if(HAL_GPIO_ReadPin(col, c3) == 0){ while(HAL_GPIO_ReadPin(col, c3) == 0); return '9'; }
	if(HAL_GPIO_ReadPin(col, c4) == 0){ while(HAL_GPIO_ReadPin(col, c4) == 0); return 'C'; }

	HAL_Delay(80);

	//////////////  FOR ROW 4  //////////////////

	HAL_GPIO_WritePin(row, r4, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(row, r1 | r2 | r3, GPIO_PIN_SET);

	if(HAL_GPIO_ReadPin(col, c1) == 0){ while(HAL_GPIO_ReadPin(col, c1) == 0); return '*'; }
	if(HAL_GPIO_ReadPin(col, c2) == 0){ while(HAL_GPIO_ReadPin(col, c2) == 0); return '0'; }
	if(HAL_GPIO_ReadPin(col, c3) == 0){ while(HAL_GPIO_ReadPin(col, c3) == 0); return '#'; }
	if(HAL_GPIO_ReadPin(col, c4) == 0){ while(HAL_GPIO_ReadPin(col, c4) == 0); return 'D'; }

	HAL_Delay(80);

	return '!';
}
