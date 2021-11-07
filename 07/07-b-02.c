/*
 * 07-b-02.c
 *
 *  Created on: 2018/05/29
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
void mytoupper(char *x){
	*x=*x-'a'+'A';
}
int main()
{
	char a;
	printf("Input character:");
	scanf("%c",&a);
	if(a>='a' && a<='z'){
	mytoupper(&a);
	}else{}
	printf("Output character:%c",a);
	return 0;
}


