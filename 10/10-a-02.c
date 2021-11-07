/*
 * 10-a-02.c
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

	int s;
	s=mygetline(line,MAX);

	printf("%s(%d)",line,s);
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
