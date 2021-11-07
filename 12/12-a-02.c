/*
 * 12-a-02.c
 *
 *  Created on: 2018/07/03
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
	printf("input 5 numbers:");
	int *n;
	int x;
	n=&x;
	n =(int *)malloc(5);
	int i=0;
	for(i=0;i<5;i++){
	scanf("%d",&x+i);
	}
	for(i=4;i>=0;i--)
	{
		printf("%d",x+i);
	}
	return 0;
}

