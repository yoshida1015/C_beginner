/*
 * 03-a-04.c
 *
 *  Created on: 2018/04/24
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
		printf("Input an integer:\n");
		if(scanf("%d",&x)!=1){
			printf("Incorrect input\n");
			exit(1);
		}

				if(1<=x && x<=9){
					printf("%d is one disit positive integer",x);
				}else {
					printf("%d is not one disit positive integer",x);
				}

				return 0;
}



