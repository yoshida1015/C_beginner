/*
 * 13-a-04.c
 *
 *  Created on: 2018/07/10
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define MAX 100
void print_sequence(int);
int main(int argc, char *argv[])
{
	int x;
	if(argc==1||argc>=3){
		printf("Incorrect input");
		return 0;
	}
	x=atoi(argv[1]);
	print_sequence(x);
	return 0;
}
void print_sequence(int t){;
	if(t==0){
		return;
	}
	print_sequence(t-1);
	printf("%d ",t);
}




