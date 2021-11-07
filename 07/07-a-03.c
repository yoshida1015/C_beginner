/*
 * 07-a-03.c
 *
 *  Created on: 2018/05/29
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
void swap(float*x,float *y){
	float t;
	t=*x;
	*x=*y;
	*y=t;
}
int main()
{
	float a,b;
	printf("Input 1st number:");
	scanf("%f",&a);
	printf("Input 2nd number:");
	scanf("%f",&b);
	swap(&a,&b);
	printf("Swapped 1st:%f,2nd:%f",a,b);
	return 0;
}


