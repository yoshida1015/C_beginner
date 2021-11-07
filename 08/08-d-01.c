/*
 * 08-d-01.c
 *
 *  Created on: 2018/06/11
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX_DATA 5
#define STACK_BTM -1
int main()
{
	int x=-1;
	int in[4];
int i=0;
while(i>=0){
	i++;
	char a,c;
	scanf("%c",&a);
	scanf("%c",&c);

	if(a=='s'){
		if(x<=3){
			x++;
		printf("Input number:");
		scanf("%d",&in[x]);
		scanf("%c",&c);
		printf("PUSH[%d]:%d\n",x,in[x]);
		}else{
			printf("Stack Full\n");
		}
		}else if(a=='a'){
			int z;
			if(x==STACK_BTM){
				printf("Stack Empty\n");
			}else{
			for(z=x;z>=0;z--){
				printf("POP[%d]:%d\n",z,in[z]);
				x=-1;
			}}
		}else if(a=='p'){
			if(x==STACK_BTM){
				printf("Stack Empty\n");
			}else{
				printf("POP[%d]:%d\n",x,in[x]);
				x--;
			}
		}else if(a=='e'){
			break;
		}else{
			printf("Illegal Input\n");
		}}

	printf("Program End");
	return 0;
}



