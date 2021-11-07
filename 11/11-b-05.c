/*
 * 11-b-05.c
 *
 *  Created on: 2018/07/02
 *      Author: ub301144
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 100

struct pay{
		int jikyu;
		int kotuhi;

};
struct staff{
	int ID;
	char stf[MAX];
	struct pay x;
};

int main() {
	int i=0,id=0;
	struct staff a[MAX];
	printf("Registration mode started. Please input name,"
			"hourly wage and transportation expenses : ");
	while(scanf("%s",&(a[i].stf))!=EOF){
		a[i].ID=id;
		scanf("%d %d",&(a[i].x.jikyu),&(a[i].x.kotuhi));
		printf("Registered.ID:%d,name:%s,hourly wage:%d,"
				"transportation expenses:%d"
				,a[i].ID,a[i].stf,a[i].x.jikyu,a[i].x.kotuhi);
		i++;
		id++;
		if(i==MAX){
			break;
		}
	}
	printf("\nPayroll mode started.Please input ID,hours of duty "
			"and days worked:");
	int sch,hour,day;
	while(sch!=EOF){
		scanf("%d %d %d",&sch,&hour,&day);
		if(sch<id){
		printf("ID:%d,name:%s,pay:%d",sch,a[sch].stf,
				a[sch].x.jikyu*hour+a[sch].x.kotuhi*day);
		}else{
			printf("This ID is not used yet.");
		}

	}
	return 0;
}

