/*
 * 03-a-03.c
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

				if(x%5==0){
					printf("%d is divisible by 5",x);
				}else {
					printf("%d is not divisible by 5",x);
				}

				return 0;
}


