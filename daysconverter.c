#include<stdio.h>

void main()
{
	int total_d,y,w,d;
	
	printf("Enter Days : ");
	scanf("%d",&total_d);
	
	y=total_d/365;
	total_d-=y*365;
	
	w=total_d/7;
	total_d-=w*7;
	
	d=total_d;
	
	printf("Years : %d \nWeeks : %d \nDays : %d ",y,w,d);
	
}
