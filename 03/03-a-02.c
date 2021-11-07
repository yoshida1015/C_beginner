/*
 * 03-a-02.c
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
					printf("Two numbers are equal");
				}else if(x>y){
					printf("%d is lager than %d",x,y);
				}else{
					printf("%d is lager than %d",y,x);
				}
				return 0;
}


