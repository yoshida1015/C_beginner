/*
 * 13-b-01.c
 *
 *  Created on: 2018/07/10
 *      Author: ub301144
 */
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define ALP 26
int main(int argc, char *argv[])
{
	int alp[ALP];
	int i,j=0,k=0;
	for(i=0;i<ALP;i++){
		alp[i]=0;
	}
	while(*(argv[1]+i)!='\0'){
		i++;
		k++;
	}
	for(j=0;j<k;j++){
	for(i=0;i<ALP;i++){
		if(*(argv[1]+j)==65+i || *(argv[1]+j)==97+i){
			alp[i]++;
		}
	}}
	for(i=0;i<ALP;i++){
		if(alp[i]!=0){
			printf("%c(%c):%d\n",65+i,97+i,alp[i]);
		}
	}
	return 0;
}


