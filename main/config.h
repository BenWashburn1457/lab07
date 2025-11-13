#ifndef CONFIG_H_
#define CONFIG_H_

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "lcd.h"

// Game timer period
#define CONFIG_GAME_TIMER_PERIOD 40.0E-3f

// game constants
#define CONFIG_MAX_TOTAL_BLOONS 10
#define CONFIG_TRACK_WIDTH 10
#define CONFIG_MENU_WIDTH 40
#define CONFIG_COURSE_WIDTH (LCD_W - CONFIG_MENU_WIDTH)

    
// Colors
#define CONFIG_COLOR_BACKGROUND BLUE
#define CONFIG_COLOR_CURSOR BLACK
#define CONFIG_TRACK_COLOR WHITE

#endif // CONFIG_H_
