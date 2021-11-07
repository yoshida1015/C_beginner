/*
 * 09-a-04.c
 *
 *  Created on: 2018/06/12
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
#define ASIZE 10
int counter(char []);
int counter(char a[]){
	int i=0,k=0;
	while(i<ASIZE){
		if(a[i]=='a'|| a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
			k++;
		}else{}
		i++;
	}
	printf("count:%d",k);
}
int main()
{
	char x[ASIZE];
	printf("input 10 characters:");
	int j;
	for(j=0;j<ASIZE;j++){
		scanf("%c",&x[j]);
	}
	counter(x);
	return 0;
}



