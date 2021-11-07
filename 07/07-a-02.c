/*
 * 07-a-02.c
 *
 *  Created on: 2018/05/29
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
void hundred(int*x){
	*x=100;
}
int main()
{
	int a=500,*p;
	p=&a;
	printf("before:a=%d\n",a);
	hundred(p);
	printf("after:a=%d",a);
	return 0;
}


