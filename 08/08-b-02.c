/*
 * 08-b-02.c
 *
 *  Created on: 2018/06/05
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
	float w;
	int t;
	for(t=1;t<=q;t++){
		w=w+a[t];
	}
	printf("max:%d,min:%d,average:%f",a[q],a[1],w/q);

	return 0;
}




