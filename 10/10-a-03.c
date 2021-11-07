/*
 * 10-a-03.c
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
	char s[4];
	fgets(line,MAX,stdin);
	strncpy(s,line,3);
	s[3]='\0';
	int i=0;
	for(i=0;i<4;i++){
	printf("%c",s[i]);}
	return 0;
}



