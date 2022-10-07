#include <stdbool.h>

#pragma once
typedef struct point {
	int x;
	int y;
} point;

/*add your definition of circle here. You need top call it "circle"*/

typedef struct circle
{
int r; //Radius
point p; //Centrum
} circle;

void fiveCircles(circle c[]);
bool circleIsValid(const circle* c);
void translate(circle* c, const point* p);

