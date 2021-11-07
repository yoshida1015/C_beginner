/*
 * 11-b-04.c
 *
 *  Created on: 2018/07/02
 *      Author: ub301144
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 100

struct staff{
	int ID;
	char stf[MAX];
};

int main() {
	int i=0,id=0;
	struct staff a[MAX];
	printf("Registration mode started. \nPlease input name : ");
	while(scanf("%s",&(a[i].stf))!=EOF){
		a[i].ID=id;
		printf("Registered.ID:%d,name:%s\n",a[i].ID,a[i].stf);
		i++;
		id++;
		if(i==MAX){
			break;
		}
	}
	printf("Search mode started.\nPlease input ID:");
	int n;
	while(scanf("%d",&n)!=EOF){


		if(n<id){
		printf("ID:%d,name:%s",n,a[n].stf);
		}else{
			printf("This ID is not used yet.");
		}}

	return 0;
}
