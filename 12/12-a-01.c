/*
 * 12-a-01.c
 *
 *  Created on: 2018/07/03
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
char test[] ="test";
char *p;
//領域を確保し、確保した領域に文字列をコピー
p=malloc(4);
p=&test;
printf("%s", p);
//確保した領域を解放
free(p);
return 0;
}



