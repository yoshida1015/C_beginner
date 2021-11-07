/*
 * 11-b-01.c
 *
 *  Created on: 2018/06/26
 *      Author: ub301144
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define STnum 10
#define nmlng 100

struct student{
	int number;
	char lname[nmlng];
	char fname[nmlng];
	float point;
};

int main(){

	struct student a[STnum];
	int i=0,w=0;
	for(i=0;i<STnum;i++){
		scanf("%d",&(a[i].number));
		scanf("%s",&(a[i].lname));
		scanf("%s",&(a[i].fname));
		scanf("%f",&(a[i].point));
		if((a[i].number)<0){
			break;
		}
		w++;
	}
	int j=0,k=0;
		for(i=1;i<w;i++){
			 if(a[j].point<a[i].point){
				j=i;
			}
			if(a[k].point>a[i].point){
				k=i;
			}

		}

		printf("Best Student is %s %s(%f)\n",a[j].lname,a[j].fname,a[j].point);
		printf("Worst Student is %s %s(%f)",a[k].lname,a[k].fname,a[k].point);
	return 0;
}



