/*
 * 11-a-04.c
 *
 *  Created on: 2018/06/26
 *      Author: ub301144
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 5

struct result{
	int max;
	int min;
	float ave;
};
struct result get_result(int *);
int main() {

	printf("input 5 integers:");
	int a[MAX];
	struct result b;
	int i;
	for(i=0;i<MAX;i++){
		scanf("%d",&a[i]);
	}
	b=get_result(a);
	printf("max:%d,min:%d,ave:%f",b.max,b.min,b.ave);
	return 0;
}
struct result get_result(int *t){
	struct result modori;
	int i=1,j=0,k=0;
	for(i=1;i<MAX;i++){
		if(t[j]<t[i]){
			j=i;
		}
		if(t[k]>t[i]){
			k=i;
		}

	}
	modori.max=t[j];
	modori.min=t[k];

	float sum=0;
	for(i=0;i<MAX;i++){
		sum=sum+t[i];
	}
	modori.ave=sum/MAX;

	return modori;

}
