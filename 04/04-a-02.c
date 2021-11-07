/*
 * 04-a-02.c
 *
 *  Created on: 2018/05/08
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,x,y;
	y=1;
	printf("input an integer");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
	    y=y*i;
	}
		printf("%d!==%d",x,y);
	printf("\n");
				return 0;
}


