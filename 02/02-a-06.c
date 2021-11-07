/*
 * 02-a-06.c
 *
 *  Created on: 2018/04/17
 *      Author: ub301144
 */
#include <stdio.h>

int main()
{
	int x,y,z;
	printf("Input hour\n");
	if(scanf("%d",&x)!=1){
		printf("Incorrect input\n");
		exit(1);
	}
	y=60*x;
	z=360*x;
	printf("%d(hour) is  %d(min) \n",x,y);
	printf("%d(min) is %d(sec) \n",y,z);
	return 0;
}



