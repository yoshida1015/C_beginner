/*
 * 10-a-07.c
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
	fgets(line,MAX,stdin);
	int x,y;
	x=mystrlen(line);
	y=strlen(line);
	printf("Length(mystrlen):%d\nLength(strlen):%d",x,y);
	return 0;
}

int mystrlen(char *s){
	int l;
	for(l=0;s[l]!='\0';l++){

	}
	return l;
}

