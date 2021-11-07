/*
 * 11-b-02.c
 *
 *  Created on: 2018/07/02
 *      Author: ub301144
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct mydate{
	int y;
	int m;
	int d;
};
void printdate(struct mydate);
struct mydate tomorrow(struct mydate);
int main() {
	struct mydate a,b;
	scanf("%d %d %d",&(a.y),&(a.m),&(a.d));
	printf("Today is ");
	printdate(a);
	b=tomorrow(a);
	printf("Tomorrow is ");
	printdate(b);
	return 0;
}
void printdate(struct mydate t){
	printf("%4d/%02d/%02d\n",t.y,t.m,t.d);
}
struct mydate tomorrow(struct mydate s){
	struct mydate ret;
	if(s.m==1||s.m==3||s.m==5||s.m==7||s.m==8||s.m==10){
		if(s.d==31){
			s.m++;
			s.d=1;
		}else{
			s.d++;
		}
	}else if(s.m==12){
		if(s.d==31){
			s.y++;
			s.m=1;
			s.d=1;
		}else{
			s.d++;
		}
	}else if(s.m==4||s.m==6||s.m==9||s.m==11){
		if(s.d==30){
			s.m++;
			s.d=1;
		}else{
			s.d++;
		}
	}else if(s.m==2){
		if(s.d==29){
			s.m++;
			s.d=1;
		}else if(s.d==28){
			if(s.y%400==0||(s.y%4==0 && s.y%100!=0)){
				s.d++;
			}else{
				s.m++;
				s.d=1;
			}
		}else{
			s.d++;
		}
	}
	ret=s;
	return ret;
}

