/*
 * 11-b-03.c
 *
 *  Created on: 2018/07/02
 *      Author: ub301144
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct point{
	float x;
	float y;
};
struct circle{
	float r;
	struct point s;
};

int circle_intersect(struct circle,struct circle);

int main() {

	struct circle c1,c2;
	printf("Input 1st Circle(x,y,z):");
	scanf("%f %f %f",&(c1.s.x),&(c1.s.y),&(c1.r));
	printf("Input 2nd Circle(x,y,z):");
	scanf("%f %f %f",&(c2.s.x),&(c2.s.y),&(c2.r));
	int p;
	p=circle_intersect(c1,c2);
	printf("Circles have %d intersect point",p);
	return 0;
}
int circle_intersect(struct circle a,struct circle b){
	int point;
	float dx,dy,d;
	dx=a.s.x-b.s.x;
	dy=a.s.y-b.s.y;
	d=sqrt(dx*dx+dy*dy);
	if(a.r<b.r){
		float t,l;
		t=a.r;
		l=b.r;
		a.r=l;
		b.r=t;
	}
	float wr,sr;
	wr=a.r+b.r;
	sr=a.r-b.r;
	if(sr<d && d<wr){
		point=2;
	}else if(d==wr || d==sr){
		point=1;
	}else{
		point=0;
	}
	return point;
}


