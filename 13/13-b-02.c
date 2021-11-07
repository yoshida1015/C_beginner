/*
 * 13-b-02.c
 *
 *  Created on: 2018/07/10
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define MAX 100
int fib(int);
int main(int argc, char *argv[])
{
	if(argc==1){
		printf("Few arguments");
		return 0;
	}
	int i=1;
	for(i=1;i<argc;i++){
	int x;
	x=atoi(argv[i]);
	int k;
	k=fib(x);
	printf("Fib[%d]:%d\n",x,k);
	}
	return 0;
}
int fib(int t){
	if(t<=2){
		return 1;
	}
	return fib(t-1)+fib(t-2);
}



