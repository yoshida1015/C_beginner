/*
 * 08-a-01.c
 *
 *  Created on: 2018/06/05
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
#define ASIZE 5
int main()
{
	int a[ASIZE],j;
	char enter;
	printf("input 5 numbers:");
	for(j=0;j<ASIZE;j++){
		scanf("%d",&a[j]);
		scanf("%c",enter);
	}
	for(j=ASIZE-1;j>=0;j--){
		printf("%d",a[j]);
	}
	return 0;
}



