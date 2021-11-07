/*
 * 03-c-02.c
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

				if(x%2==0 && x%3==0 && x%5==0){
					printf("%d is divisible by 2,3,and 5",x);
				}else if(x%2==0 && x%3==0){
					printf("%d is divisible by 2 and 3, but not divisible by 5",x);
					}else if(x%2==0 && x%5==0){
					printf("%d is divisible by 2 and 5, but not divisible by 3",x);
					}else if(x%2==0){
						printf("%d is divisible by 2, but not divisible by 3 nor 5",x);
					}else if(x%3==0 && x%5==0){
						printf("%d is divisible by 3 and 5, but not divisible by 2",x);
					}else if(x%3==0){
						printf("%d is divisible by 3, but not divisible by 2 nor 5",x);
					}else if(x%5==0){
						printf("%d is divisible by 5, but not divisible by 2 nor 3",x);
					}else{
						printf("%d is not divisible by 2,3 nor 5",x);
					}
				return 0;
				}


