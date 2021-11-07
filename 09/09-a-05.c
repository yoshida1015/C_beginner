/*
 * 09-a-05.c
 *
 *  Created on: 2018/06/12
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
void disp_array(int[][4]);
void disp_array(int a[3][4]){
	int i,j;
	for(j=0;j<3;j++){
	for(i=0;i<4;i++){
		printf("%d ",a[j][i]);
	}printf("\n");
	}
}
int main()
{
int array[3][4] = { {11,12,13,14},
{15,16,17,18},
{19,20,21,22} };
disp_array(array);
return 0;
}



