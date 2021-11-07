/*
 * 08-b-01.c
 *
 *  Created on: 2018/06/05
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
#define ASIZE 5
void swap(int*xp,int*yp){
	int t;
	t=*xp;
	*xp=*yp;
	*yp=t;
}
int main()
{
	int i,j,s;
	int a[ASIZE];
	for(i=0;i<ASIZE;i++){
		scanf("%d",&a[i]);
	}

	for(j=ASIZE-1;j>0;j--){
	for(i=0;i<j;i++){
		if(a[i]>a[i+1]){
			swap(&a[i],&a[i+1]);
		}
	}}
	for(s=0;s<ASIZE;s++){
		printf("%d ",a[s]);
	}

	return 0;
}



