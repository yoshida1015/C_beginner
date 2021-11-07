/*
 * 06-a-03.c
 *
 *  Created on: 2018/05/25
 *      Author: ub301144
 */
#include <stdio.h>
#include<stdlib.h>
#define  Pi 3.14
float circumference(float x)
{
	printf("Circumference is %f",2*x*Pi);
}
int main()
{
	float a;
	printf("Input r:");
	scanf("%f",&a);
	circumference(a);

	return 0;
}


