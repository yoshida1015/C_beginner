/*
 * 06-a-05.c
 *
 *  Created on: 2018/05/25
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>

float add(float a,float b)
{
	printf("%f+%f=%f\n",a,b,a+b);
}
float sub(float a,float b)
{
	printf("%f-%f=%f\n",a,b,a-b);
}
float mul(float a,float b)
{
	printf("%f*%f=%f\n",a,b,a*b);
}
float divv(float a,float b)
{
	if(b==0){
		printf("%f/%f=%f\n",a,b,0);
	}else{
		printf("%f/%f=%f\n",a,b,a/b);
	}
}

int main()
{
	float x,y;
	printf("input 2 decimals:");
	scanf("%f",&x);
	scanf("%f",&y);
	add(x,y);
	sub(x,y);
	mul(x,y);
	divv(x,y);
	return 0;
}




