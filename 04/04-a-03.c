/*
 * 04-a-03.c
 *
 *  Created on: 2018/05/08
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a;
	printf("Do you like programming? Please answer y or n\:");
	scanf("%c",&a);
	switch(a){
	case'y':printf("Good!");
	break;
	case'n':printf("Do your best!");
	break;
	default:printf("error");
	break;

	}


				return 0;
}



