/*
 * 10-a-06.c
 *
 *  Created on: 2018/06/19
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 100000


int main()
{


	int a,b,c;

	char first[MAX];
	printf("input a string(1):");
	a=mygetline(first,MAX);
	char second[MAX];
	printf("input a string(2):");
	b=mygetline(second,MAX);
	char third[MAX];
	printf("input a string(3):");
	c=mygetline(third,MAX);


	if(a>=b && a>=c){
		printf("max:%s",first);
	}else if(b>a && b>=c){
		printf("max:%s",second);
	}else{
		printf("max:%s",third);
	}
	return 0;
}
int mygetline(char buf[],int max){
	char *p;
	if(fgets(buf,max,stdin)!=NULL){
		p=strrchr(buf,'\n');
		if(p!=NULL){
			*p='\0';
		}
		return strlen(buf);
	}else{
		return 0;
}
}
