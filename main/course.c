#include "course.h"
#include "lcd.h"
#include "config.h"

#define COURSE_LENGTH (sizeof(CONFIG_COURSE)/sizeof(CONFIG_COURSE[0]) - 1)

const point_t CONFIG_COURSE[] = {
    {0,  40},
    {LCD_W/2,  40},
    {LCD_W/2, LCD_H - 40},
    {0, LCD_H - 40},
    
};

void course_init(void){

}

void draw_course(void){
    lcd_fillScreen(CONFIG_COLOR_BACKGROUND);
    uint16_t start_x;
    uint16_t start_y;
    uint16_t width;
    uint16_t height;
    for (int32_t i = 0; i < COURSE_LENGTH; i++) {
        
        if (CONFIG_COURSE[i+1].x -CONFIG_COURSE[i].x > 0){
            start_x = CONFIG_COURSE[i].x;
            width = CONFIG_COURSE[i+1].x -CONFIG_COURSE[i].x + CONFIG_TRACK_WIDTH;
        } else {
            start_x = CONFIG_COURSE[i+1].x;
            width = CONFIG_COURSE[i].x -CONFIG_COURSE[i+1].x + CONFIG_TRACK_WIDTH;
        }
        if (CONFIG_COURSE[i+1].y -CONFIG_COURSE[i].y > 0){
            start_y = CONFIG_COURSE[i].y;
            height = CONFIG_COURSE[i+1].y -CONFIG_COURSE[i].y + CONFIG_TRACK_WIDTH;
        } else {
            start_y = CONFIG_COURSE[i+1].y;
            height = CONFIG_COURSE[i].y -CONFIG_COURSE[i+1].y + CONFIG_TRACK_WIDTH;
        }
        lcd_fillRect(
            start_x,
            start_y,
            width,
            height,
            CONFIG_TRACK_COLOR
        );
    }
}