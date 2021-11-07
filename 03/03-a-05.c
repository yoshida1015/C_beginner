/*
 * 03-a-05.c
 *
 *  Created on: 2018/04/24
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
		printf("Input month:\n");
		if(scanf("%d",&x)!=1){
			printf("Incorrect input\n");
			exit(1);
		}

				if(x==2 || x==4 || x==6 || x==9 || x==11){
					printf("This month does not have 31 days");
				}else if(x==1 || x==3 || x==5 || x==7 || x==8 || x==10|| x==12){
					printf("This month has 31 days");
				}else{
					printf("error: imput from 1 to 12");
				}

				return 0;
}


