/*
 * LCD.H
 *
 *  Created on: Dec 19, 2024
 *      Author: enzof
 */

#ifndef SRC_LCD_H_
#define SRC_LCD_H_

void lcd_init(void);
void lcd_cmd(char cmd);
void lcd_print(char data);
void lcd_put_cursor(int row, int col);
void lcd_string(char *str);
void lcd_clear(void);

#endif /* LCD_H_ */
