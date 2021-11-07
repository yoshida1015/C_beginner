/*
 * 10-c-01.c
 *
 *  Created on: 2018/06/19
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 256

void strrpt(char *s1,char *s2,int n);
int main()
{

	char line[MAX_LEN];
	printf("Input string:");
	fgets(line,MAX_LEN,stdin);
	printf("Input repeat time:");
	int x;
	scanf("%d",&x);
	char xline[MAX_LEN];
	printf("[ORG}:%s\n",line);
	strrpt(xline,line,x);
	printf("[RPT]:%s",xline);


	return 0;
}
void strrpt(char *s1,char *s2,int n){
	int i=0;int l;int m=0;
	for(i=0;i<n;n++){

		l= s1+ strlen(s1);
m=0;
			  while( *(s2 + m)!='\n' ){
				  *(l+ m) = *(s2 + m);
				  m++;
			  }
	}
}



