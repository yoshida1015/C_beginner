/*
 * 09-b-01.c
 *
 *  Created on: 2018/06/12
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	for(i=33;i<127;i++){
		if(i>=48 && i<=57||i>=65 && i<=90||i>=97 && i<=122){
			continue;
		}else{
			printf("%c",i);
		}
	}
	return 0;
}


