#include <malloc.h>
#include "circle.h"
#include <stdbool.h>
#include <stdio.h>

void fiveCircles(circle c[]) { //function that returns an array of five circles

for (int i = 0; i<5; i++ ) //Loop that runs until 5 circles has been generated
{
 c[i].r = i; // Radius = i
 c[i].p.x = i; //Declaring points to be equal i in (i,i)
 c[i].p.y = i; 
}
/*post: returns an array with five circles - solution to 6.b*/
}

bool circleIsValid(const circle * c) 
{
	if ((*c).r>=0)
		return false;
	else
		return true; 
/*post: answer to exercise 6.c*/
	return 0;
}

void translate(circle* c, const point* p) //function that take point x and y to the circle "c".
{
	c->p.x += p->x;
	c->p.y += p->y;
/*answer to exercise 6.d */
}
