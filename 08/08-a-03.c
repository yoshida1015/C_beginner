/*
 * 08-a-03.c
 *
 *  Created on: 2018/06/05
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *a;
	a=str;
	int b,c;
	printf("input a number(1~26):");
	scanf("%d",&b);
	c=b-1;
	a+=c;
	printf("%c",*a);
	return 0;
}



