/*
 * 04-b-02.c
 *
 *  Created on: 2018/05/08
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float x,y;
	char a;
	printf("input'number''a symbol of operation''number'");
	scanf("%f %c %f",&x,&a,&y);
	switch(a){
	case'+':printf("answer:%f",x+y);
	break;
	case'-':printf("answer:%f",x-y);
	break;
	case'*':printf("answer:%f",x*y);
	break;
	case'/':
		if(y==0){
			printf("Division by zero is not possible");
		}else{
			printf("answer:%f",x/y);}
		break;
	}


				return 0;
}



