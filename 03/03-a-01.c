/*
 * 03-a-01.c
 *
 *  Created on: 2018/04/24
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,y;
		printf("Input 1st number:\n");
		if(scanf("%d",&x)!=1){
			printf("Incorrect input\n");
			exit(1);
		}
				printf("Input 2nd number:\n");
				if(scanf("%d",&y)!=1){
					printf("Incorrect input\n");
					exit(1);
				}
				if(x==y){
					printf("Two numbers are equal.");
				}else {
					printf("Two numbers are not equal.");
				}

				return 0;
}

