/*
 * 03-c-01.c
 *
 *  Created on: 2018/04/24
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,y,z;
		printf("Input 1:\n");
		if(scanf("%d",&x)!=1){
			printf("Incorrect input\n");
			exit(1);
		}printf("Input 2:\n");
		if(scanf("%d",&y)!=1){
			printf("Incorrect input\n");
			exit(1);
		}printf("Input 3:\n");
		if(scanf("%d",&z)!=1){
			printf("Incorrect input\n");
			exit(1);
		}

				if(x<=y && y<=z){
					printf("Sorted:%d,%d,%d",x,y,z);
				}else if(x<=z && z<=y){
					printf("Sorted:%d,%d,%d",x,z,y);
					}else if(y<=x && x<=z){
					printf("Sorted:%d,%d,%d",y,x,z);
					}else if(y<=z && z<=x){
						printf("Sorted:%d,%d,%d",y,z,x);
					}else if(z<=x && x<=y){
						printf("Sorted:%d,%d,%d",z,x,y);
					}else if(z<=y && y<=x){
						printf("Sorted:%d,%d,%d",z,y,x);
					}
				return 0;
				}


