/*
 * 07-a-04.c
 *
 *  Created on: 2018/05/29
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
sum(int*x,int*y){
	int t;
	t=*x+*y;
}
int main()
{
	int a,b;
	printf("input 2 integer:");
	scanf("%d %d",&a,&b);
	printf("%d+%d=%d\n",a,b,sum(&a,&b));
	return 0;
}


