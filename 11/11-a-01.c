/*
 * 11-a-01.c
 *
 *  Created on: 2018/06/26
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct point{
	float x;
	float y;
};

int main()
{
	struct point a, b;
	printf("input first point(x1 y1):");
	scanf("%f %f",&a.x,&a.y);
	printf("input first point(x2 y2):");
	scanf("%f %f",&b.x,&b.y);
	float s,t;
	s=(b.y-a.y)/(b.x-a.x);
	t=-1*s*a.x+a.y;
	printf("linear function:y = %f x + %f",s,t);

	return 0;
}


