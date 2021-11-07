/*
 * 08-c-01.c
 *
 *  Created on: 2018/06/11
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
void swap(int*xp,int*yp){
	int t;
	t=*xp;
	*xp=*yp;
	*yp=t;
}
int main()
{
	int q;
	printf("input array size:");
	scanf("%d",&q);

	int i,j;
	int a[q];
	printf("input array elements:");
	for(i=1;i<=q;i++){
		scanf("%d",&a[i]);
	}

	for(j=q;j>0;j--){
	for(i=1;i<j;i++){
		if(a[i]>a[i+1]){
			swap(&a[i],&a[i+1]);
		}
	}}
	if(q%2==1){
		int f;
		f=q/2+1;
		float u;
		u=a[f];
		printf("center:%f",u);
	}else{
		int g;
		float y;
		g=q/2;
		y=a[g]+a[g+1];
		printf("center:%f",y/2);
	}

	return 0;
}

