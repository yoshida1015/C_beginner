/*
 * 03-b-01.c
 *
 *  Created on: 2018/04/24
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
		printf("Input month:\n");
		if(scanf("%d",&x)!=1){
			printf("Incorrect input\n");
			exit(1);
		}

				if(x==0){
					printf("Input number is 0");
				}else if(x%2==0 && x>0){
					printf("Positive even number");
					}else if(x%2==0 && x<0){
						printf("Negative even number");
					}else if(x>0){
					printf("Positive odd number");
					}else{
						printf("Negative odd number");
				}

				return 0;
				}


