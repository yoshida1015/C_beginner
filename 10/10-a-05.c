/*
 * 10-a-05.c
 *
 *  Created on: 2018/06/19
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 100000


int main()
{

	char line[MAX];
	printf("input string:");
	fgets(line,MAX,stdin);
	printf("input key:");
	int a;
	scanf("%d",&a);
	int i;
	for(i=0;line[i]!='\n';i++)
	{printf("%c",line[i]+a);}
	return 0;
}



