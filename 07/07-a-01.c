/*
 * 07-a-01.c
 *
 *  Created on: 2018/05/29
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	int *p;
	p=&a;
	printf("input an integer:");
	scanf("%d",&a);
	printf("address of a is %p\n",p);
	printf("value of a is %d\n",*p);
	return 0;
}


