/*
 * 13-a-03.c
 *
 *  Created on: 2018/07/10
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define MAX 100
int main(int argc, char *argv[])
{
	int i;
	for(i=1;i<argc;i++){
		printf("%s\n",argv[i]);
	}return 0;
}


