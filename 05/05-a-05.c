/*
 * 05-a-05.c
 *
 *  Created on: 2018/05/15
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char a,b;
	printf("Please help me!\n input y or n:");
			scanf("%c",&a);
			scanf("%c",&b);


	if(a=='n'){
		while(a=='n'){
			printf("Huh?\nPlease help me!\n input y or n:");
		scanf("%c",&a);
		scanf("%c",&b);
		}}
	if(a=='y'){
			printf("Thank you!");
		}
		else{
			printf("error");
		}



	return 0;
}




