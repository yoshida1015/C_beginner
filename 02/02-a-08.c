/*
 * 02-a-08.c
 *
 *  Created on: 2018/04/17
 *      Author: ub301144
 */
#include <stdio.h>

int main()
{
	float x,y;
		printf("Input 1st number:\n");
		if(scanf("%f",&x)!=1){
			printf("Incorrect input\n");
			exit(1);
		}
				printf("Input 2nd number:\n");
				if(scanf("%f",&y)!=1){
					printf("Incorrect input\n");
					exit(1);
				}
				int z;
				z=x+y;
				printf("Result is:%d\n",z);
				return 0;
}



