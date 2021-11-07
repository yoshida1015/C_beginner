/*
 * 09-a-03.c
 *
 *  Created on: 2018/06/12
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
void init_array(float f[],int n){
	int i;
	for(i=0;i<n;i++){
		f[i]=0;
		printf("f[%d]:%f\n",i,f[i]);
	}
}
int main()
{
	int x;
	float f[x];
	x=10;
	init_array(f,x);
	return 0;
}



