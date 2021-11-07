/*
 * 05-b-02.c
 *
 *  Created on: 2018/05/21
 *      Author: ub301144
 */
#include <stdio.h>
#include<stdlib.h>

int main()
{
	int x,i;
	printf("input an integer(1 to 9):");
	scanf("%d",&x);
	if(1<=x && x<=9){
		for(i=x;i>0;i--){
			printf("%d",x);
		}}else{
		printf("please input 1 to 9");

		}
	return 0;
}

