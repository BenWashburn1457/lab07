#ifndef COURSE_H_
#define COURSE_H_

#include "config.h"

// Initialize the course.

typedef struct {
    uint16_t x;
    uint16_t y;
} point_t;

void course_init(void);

void draw_course(void);



#endif // GAME_H_