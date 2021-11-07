/*
 * 06-c-01.c
 *
 *  Created on: 2018/05/28
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
int i=0;
int myrand(int a){
	a=rand()%5+1;
}
void game(int x,int b){
	if(b==x){
		i++;
		printf("Correct!your score:%d\n",i);
	}else{
		printf("Incorrect. your score:%d\n",i);
	}
}
int main()
{
	int n;
	for(n=9;n>=0;n--){
		printf("Please expect a number(1 to 5):");
		int s,t;
		scanf("%d",&s);
		t=myrand(t);
		printf("your expection:%d,random number:%d\n",s,t);
		game(s,t);
		if(i==3){
			printf("Clear!");
			break;
		}
		printf("remaining:%d\n",n);
		if(n>0){
			continue;
		}
		printf("Game over.");
	}

	return 0;
}


