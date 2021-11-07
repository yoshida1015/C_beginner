/*
 * 10-b-02.c
 *
 *  Created on: 2018/06/25
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 256

void mystrrev(char *s1,char*s2);
int main()
{

	char line[MAX_LEN];
	fgets(line,MAX_LEN,stdin);
	printf("[IN]%s",line);
	char reline[MAX_LEN];
	mystrrev(reline,line);
	printf("[REV]%s",reline);
	return 0;
}

	void mystrrev(char *s1,char *s2){
		int n=0;
		while( *(s2+n+1)!='\n'){
				  n++;
			  }
		int j=0;
		while(n>=0){
			*(s1+j)=*(s2+n);
			n--;
			j++;
		}
		*(s1+j)='\0';

	}



