/*
 * 05-b-03.c
 *
 *  Created on: 2018/05/21
 *      Author: ub301144
 */
#include <stdio.h>
#include<stdlib.h>

int main()
{
	int x,i=0;
	printf("input number:");
	scanf("%d",&x);
	if(1<=x){
		printf("%d is divisible by ",x);
		do{
			i++;
			if(x%i>0){
				continue;
			}
			printf("%d ",i);

		}while(i<=x);}else{
		printf("Incorrect Input");

		}
	return 0;
}
