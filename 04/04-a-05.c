/*
 * 04-a-05.c
 *
 *  Created on: 2018/05/08
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a;
	printf("input your sex('m'or'f')\n");
	scanf("%c",&a);
	float x,y,z,s,t;
	printf("input your age:\n");
	scanf("%f",&x);
	printf("input your height(cm):\n");
	scanf("%f",&y);
	printf("input your weight(kg):\n");
	scanf("%f",&z);
	switch(a){
	case'm':
		s=88.362+z*13.397+y*4.799-x*5.677;
		printf("Your basal metabolism is %f(kcal/day)",s);
	break;
	case'f':
		t=447.593+z*9.247+y*3.098-x*4.33;
		printf("Your basal metabolism is %f(kcal/day)",t);
	break;
	default:printf("error");
	break;

	}


				return 0;
}


