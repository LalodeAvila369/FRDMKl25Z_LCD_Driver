#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKL25Z4.h"
#include "fsl_debug_console.h"
#include "LCD.h"


int main(void) {


    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitBootPeripherals();
    BOARD_InitDebugConsole();

    LCD_Activate(1u,1u,0u);
    LCD_Set(1u,1u,1u);
    LCD_Clear();
    Line(1);
	LCD_Write('M');
	LCD_Write('I');
	LCD_Write('C');
	LCD_Write('R');
	LCD_Write('O');
	LCD_Write('S');
	LCD_Write(' ');
	LCD_Write(' ');
	LCD_Write('I');
	LCD_Write('E');
	LCD_Write('I');
	LCD_Write(' ');
	LCD_Write(' ');
	LCD_Write('U');
	LCD_Write('A');
	LCD_Write('Z');
	Line(2);
	Drucken_LCD("_<ASTROCODE>");





    while(1) {

    }
    return 0 ;
}
