/*
 * LCD.c
 *
 *  Created on: Dec 19, 2024
 *      Author: Aurorian-3
 */
#include "LCD.H"
#include "stm32f1xx_hal.h"	// if not included , HAL code will give errors.


void lcd_init(void){

	lcd_cmd(0x0E);
	lcd_cmd(0x01);
	lcd_cmd(0x06);
	lcd_cmd(0x38);
	lcd_cmd(0x80);
}

void lcd_cmd(char cmd){
	char temp;

	temp = cmd << 3;
	GPIOA->ODR = temp;

	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0);	//RS
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);	// RW
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 1);	// EN
	HAL_Delay(10);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 0);	// EN
}

void lcd_print(char data){
	char temp;

	temp = data << 3;
	GPIOA->ODR = temp;

	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 1);	//RS
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);	// RW
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 1);	// EN
	HAL_Delay(10);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 0);	// EN
}

void lcd_put_cursor(int row, int col){

	switch(row){

	case 0:
		col |= 0x80;
		break;
	case 1:
		col |= 0xC0;
		break;
	}
	lcd_cmd(col);
}

void lcd_string(char *str){

	while(*str != '\0'){
		lcd_print(*str);
		str++;
	}
}




