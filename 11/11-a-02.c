/*
 * 11-a-02.c
 *
 *  Created on: 2018/06/26
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
struct mydate{
	int y;
	int m;
	int d;
};
void printdate(struct mydate *);
void printdate(struct mydate *p){
	printf("%04d/%02d/%02d",p->y,p->m,p->d);
}
int main()
{
	struct mydate n;
	scanf("%d %d %d",&(n.y),&(n.m),&(n.d));
	printdate(&n);

	return 0;
}

