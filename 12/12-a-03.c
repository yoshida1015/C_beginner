/*
 * 12-a-03.c
 *
 *  Created on: 2018/07/03
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define MAX 100;
struct member{
	char name[];
	struct member *next;
};
struct member wtab;
int main()
{
	wtab.next=&wtab;
	printf("input 5 names:");
	struct member a,b,c,d,e;
	wtab.next=&a;
	char new[MAX];
	scanf("%s",&new);
	a.name=new;
	a.next=&b;
	char new[];
		scanf("%s",&new);
		b.name=new;
		b.next=&c;
		char new[MAX];
			scanf("%s",&new);
			c.name=new;
		c.next=&d;
		char new[MAX];
			scanf("%s",&new);
			d.name=new;
			d.next=&e;
			char new[MAX];
				scanf("%s",&new);
				e.name=new;
		e.next=NULL;
		printf("member list:%s %s %s %s %s",a.name,b.name,
				c.name,d.name,e.name);

	return 0;
}




