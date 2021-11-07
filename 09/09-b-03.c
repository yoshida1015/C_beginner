/*
 * 09-b-03.c
 *
 *  Created on: 2018/06/18
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 90000
int main()
{
	char *a;
	int n;
	find_zero(a,n);


		return 0;
	}
void find_zero(char*a, int n){
	int c,i=0;
	int m[MAX];
			while((c=getchar())!=10){
				m[i]=c;
				i++;
				}
			int j;
			printf("Zero in ");
			for(j=0;j<i;j++){
				if(m[j]==48){
					printf("%d ",j);
				}else{}
			}
}







