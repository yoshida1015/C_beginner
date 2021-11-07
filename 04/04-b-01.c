/*
 * 04-b-01.c
 *
 *  Created on: 2018/05/08
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,x,y;
	y=0;
	printf("please input number:");
	scanf("%d",&x);
	if(1<=x && x<=100){
	for(i=1;i<=x;i++)
	{
	    y=y+i;
	}
		printf("Sum1 -  %d is:%d",x,y);
	}else{
		printf("Error:imput range is 1 to 100");}
				return 0;
}



