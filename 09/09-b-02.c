/*
 * 09-b-02.c
 *
 *  Created on: 2018/06/12
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
 void get_arr3x3(int a[3][3]);
 void sum_arr3x3(int a[3][3], int b[3][3], int c[3][3]);
 void print_arr3x3(int a[3][3]);


int main(void)
{
	int x[3][3],y[3][3],z[3][3];
	int i,j;
		for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++){
				x[i][j]=0;
			}}
		for(i=0;i<3;i++)
					{
						for(j=0;j<3;j++){
						y[i][j]=0;
					}}
		for(i=0;i<3;i++)
					{
						for(j=0;j<3;j++){
						z[i][j]=0;
					}}
		get_arr3x3(x);
		printf("a\n");
		print_arr3x3(x);
		get_arr3x3(y);
		printf("b\n");
		print_arr3x3(y);
		sum_arr3x3(x,y,z);
		printf("a+b\n");
		print_arr3x3(z);
	return 0;
}

void get_arr3x3(int a[3][3]){

	int i=0,j=0,t=0,s=0;
int d[9];
for(t=0;t<9;t++)
{scanf("%d",&d[t]);}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++){
		a[i][j]=d[s];
		s++;

	}}}
void sum_arr3x3(int a[3][3], int b[3][3], int c[3][3]){
	int i,j;
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
		}}
}
void print_arr3x3(int a[3][3]) {
	int i,j;
		for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++){
				printf("%d ",a[i][j]);
			}printf("\n");
			}
}

