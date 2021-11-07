/*
 * 07-b-03.c
 *
 *  Created on: 2018/05/29
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
void myprintf(char *n){
	while(*n!='\0'){
		printf("%c",*n);
		n++;
	}
}
int main()
{
	myprintf("Hello World!");
	return 0;
}

