/*
 * 04-a-04.c
 *
 *  Created on: 2018/05/08
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,a[20];
	a[1]=1;
	a[2]=1;
	for(i=3;i<=20;i++){
		a[i]=a[i-1]+a[i-2];
	}
	for(i=1;i<=20;i++){
		printf("fib(%d):%d\n",i,a[i]);
	}

				return 0;
}



