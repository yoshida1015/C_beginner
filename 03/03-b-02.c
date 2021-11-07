/*
 * 03-b-02.c
 *
 *  Created on: 2018/04/24
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
		printf("Input your score:\n");
		if(scanf("%d",&x)!=1){
			printf("Incorrect input\n");
			exit(1);
		}

				if(x>=50 && 100>=x){
					printf("you passed the examination.");
				}else if(x<50 && 0<=50){
					printf("you failed the examination");
					}else{
					printf("error: input from 0 to 100");
					}
				return 0;
				}



