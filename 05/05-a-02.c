/*
 * 05-a-02.c
 *
 *  Created on: 2018/05/15
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x,i=1,y;

			printf("input a positive integer:");
			scanf("%d",&x);
			y=x;

	while(i<x){
		y=y+i;
		i++;
	}
			printf("total %d",y);
	return 0;
}




