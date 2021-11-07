/*
 * 03-a-06.c
 *
 *  Created on: 2018/04/24
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float x,y,z;
		printf("Input weight of salt(g):\n");
		if(scanf("%f",&x)!=1){
			printf("Incorrect input\n");
			exit(1);
		}
				printf("Input weight of water(g):\n");
				if(scanf("%f",&y)!=1){
					printf("Incorrect input\n");
					exit(1);
				}
				z=x/(x+y)*100;
				if(z <= 26.28){
					printf("%f(g) of salt dissolves in %f(g) of water",x,y);
				}else {
					printf("%f(g) of salt does not dissolve in %f(g) of water",x,y);
				}

				return 0;
}


