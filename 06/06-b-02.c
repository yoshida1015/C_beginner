/*
 * 06-b-02.c
 *
 *  Created on: 2018/05/28
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
float bmi(float a,float b)
{
	printf("Your BMI is:%f\n",a/b/b);
}
void fatlevel(float c)
{
	if(c<18.5){
		printf("Your type [Thin]");
	}else if(18.5<=c && c<25){
		printf("Your type [Normal]");
	}else if(25<=c && c<30){
		printf("Your type [LV1]");
	}else if(30<=c && c<35){
		printf("Your type [LV2]");
	}else if(35<=c && c<40){
		printf("Your type [LV3]");
	}else{
		printf("Your type [LV4]");
	}
}
int main()
{
	float x,y,z;
	printf("Input weight(kg) and height(m):");
	scanf("%f",&x);
	scanf("%f",&y);
	bmi(x,y);
	z=x/y/y;
	fatlevel(z);
	return 0;
}



