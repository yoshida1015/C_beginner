/*
 * 06-a-04.c
 *
 *  Created on: 2018/05/25
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
int x=0;
int assign(int y)
{
	printf("assigned.\n",x);
	x=y;
}
int main()
{
	int a;
	printf("input an integer :");
	scanf("%d", &a);
	printf("x:%d\n",x);
	assign(a);
	printf("x:%d\n",x);
	return 0;

}




