/*
 * 05-a-03.c
 *
 *  Created on: 2018/05/15
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i=1;
	while(i*i<1000)
	{
		i++;
	}
	printf("%d\n",(i-1)*(i-1));
	return 0;
}




