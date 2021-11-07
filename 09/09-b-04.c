/*
 * 09-b-04.c
 *
 *  Created on: 2018/06/18
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int c;
	while((c=getchar())!=EOF){
		if(c==10){
			continue;
		}
        printf("%d\n",c);
	}
	return 0;
}


