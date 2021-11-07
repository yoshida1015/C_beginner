/*
 * 11-a-03.c
 *
 *  Created on: 2018/06/26
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define STUDENT_NUM 3
struct score{
	int a;
	int b;
	int c;
	int d;
};
void print_total_average(struct score *);
void print_total_average(struct score *t){
	float sum;
	sum=t->b+t->c+t->d;
	int total;
	total=sum;
	float ave;
	ave=sum/3;
	printf("student[%d]total:%d,average:%f\n",t->a,total,ave);
}
int main()
{
int i;
struct score list[STUDENT_NUM] = {
{ 61500001, 90, 72, 55 },
{ 61500002, 82, 77, 85 },
{ 61500003, 65, 91, 73 },
};
for (i = 0;i < STUDENT_NUM;i++) {
print_total_average(list+i);
}
return 0;
}

