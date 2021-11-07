/*
 * 07-b-01.c
 *
 *  Created on: 2018/05/29
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,*ip;
	char c,*cp;
	ip=&i;
	cp=&c;
	printf("ip:%p\n",ip);
	ip++;
	printf("++ip:%p\n",ip);
	printf("cp:%p\n",cp);
	cp++;
	printf("++cp:%p",cp);
	return 0;
}


