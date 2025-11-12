#include "course.h"
#include "lcd.h"
#include "config.h"

const int CONFIG_COURSE_X[] = {0, LCD_W-40, LCD_W-40, 0};
const int CONFIG_COURSE_Y[] = {20, 20, LCD_H-40, LCD_H-40};

void course_init(void){

}

void course_tick(void){
    lcd_fillScreen(CONFIG_COLOR_BACKGROUND);
    for (int32_t i = 0; i < CONFIG_COURSE_LENGTH; i++) {
        lcd_fillRect(
            CONFIG_COURSE_X[i],
            CONFIG_COURSE_Y[i],
            CONFIG_COURSE_X[(i + 1)] + CONFIG_TRACK_WIDTH,
            CONFIG_COURSE_Y[(i + 1)] + CONFIG_TRACK_WIDTH,
            CONFIG_TRACK_COLOR
        );
    }
}