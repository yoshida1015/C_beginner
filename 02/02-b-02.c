/*
 * 02-b-02.c
 *
 *  Created on: 2018/04/17
 *      Author: ub301144
 */
#include <stdio.h>

int main()
{
	int x,y,z;
		printf("input a:\n");
		if(scanf("%d",&x)!=1){
			printf("Incorrect input\n");
			exit(1);
		}
			printf("Input b:\n");
			if(scanf("%d",&y)!=1){
				printf("Incorrect input\n");
				exit(1);
			}
			printf("%d+%d=%d\n",x,y,x+y);
			printf("%d-%d=%d\n",x,y,x-y);
			printf("%d*%d=%d\n",x,y,x*y);
			printf("%d÷%d=%f\n",x,y,x/y);
	return 0;
}



