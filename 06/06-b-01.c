/*
 * 06-b-01.c
 *
 *  Created on: 2018/05/28
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
float bmi(float a,float b)
{
	printf("Your BMI is:%f",a/b/b);
}
int main()
{
	float x,y;
	printf("Input weight(kg) and height(m):");
	scanf("%f",&x);
	scanf("%f",&y);
	bmi(x,y);
	return 0;
}




