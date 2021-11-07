/*
 * 08-a-04.c
 *
 *  Created on: 2018/06/05
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int fib[20];
	int i;
	for(i=1;i<=20;i++){
		if(i<3){
			fib[i]=1;
			printf("fib[%d]=%d\n",i,fib[i]);
		}else{
			fib[i]=fib[i-1]+fib[i-2];
			printf("fib[%d]=%d\n",i,fib[i]);
		}}
	return 0;
}



