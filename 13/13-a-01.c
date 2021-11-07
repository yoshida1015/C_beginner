/*
 * 13-a-01.c
 *
 *  Created on: 2018/07/10
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void print_sequence(int);
int main()
{
	int x;
	printf("input an integer:");
	scanf("%d",&x);
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




