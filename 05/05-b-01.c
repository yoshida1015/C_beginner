/*
 * 05-b-01.c
 *
 *  Created on: 2018/05/21
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,i,y;
		printf("input number:");
		scanf("%d",&x);

		for(y=x;y>=0;y--){
			for(i=y;i>0;i--){
				printf("*");
			}
		printf("\n");
		}


				return 0;
}




