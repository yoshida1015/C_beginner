/*
 * 06-a-02.c
 *
 *  Created on: 2018/05/25
 *      Author: ub301144
 */
#include <stdio.h>
#include<stdlib.h>
int aster(int x)
{
	while(x>0){
		printf("*");
		x--;
	}
}
int main()
{
	int y;
	printf("input a positive integer:");
	scanf("%d",&y);
	aster(y);
	return 0;
}


