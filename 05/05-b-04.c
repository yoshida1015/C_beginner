/*
 * 05-b-04.c
 *
 *  Created on: 2018/05/21
 *      Author: ub301144
 */
#include <stdio.h>
#include<stdlib.h>

int main()
{
	int x,i,y;

	for(i=1;i<=5;i++){
		printf("input a positive integer:");
	    scanf("%d",&x);
	    if(x<0){
	    	printf("Errror:invalid input\n");
	    	continue;
	    }
	    if(x==0){
	    	break;
	    }
	    y=y+x;
		}

		printf("total:%d",y);


	return 0;
}


