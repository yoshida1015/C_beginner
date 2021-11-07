/*
 * 08-a-05.c
 *
 *  Created on: 2018/06/05
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
#define ASIZE 32
int main()
{
	int x,i;
	int nishin[ASIZE];
	for(i=0;i>ASIZE;i++){
		nishin[i]=0;
	}
	printf("input a decimal number:");
	scanf("%d",&x);
	for(i=0;x>0;i++){
		nishin[i]=x%2;
		x/=2;
	}
		while(i>0){
		printf("%d",nishin[--i]);
	}



	return 0;
}



