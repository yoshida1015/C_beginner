/*
 * 10-a-04.c
 *
 *  Created on: 2018/06/19
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 100000


int main()
{

	char first[MAX];
	printf("input first string:");
	fgets(first,MAX,stdin);
	char second[MAX];
	printf("input second string:");
	fgets(second,MAX,stdin);
	if((strcmp(first,second))==0){
		printf("same.");
	}else{
		printf("different.");
	}

	return 0;
}



