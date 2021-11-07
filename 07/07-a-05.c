/*
 * 07-a-05.c
 *
 *  Created on: 2018/05/29
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x=0,*p;
	p=&x;
	printf("value of p:%p\n",p);
	printf("value of x:%d\n",x);
	p++;
	x++;
	printf("value of ++p:%p\n",p);
	printf("value of ++x:%d\n",x);
	return 0;
}


