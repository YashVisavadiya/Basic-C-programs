#include<stdio.h>

void main()
{
	float vel,acc,time,dis;
	printf("Enter Velocity : ");
	scanf("%f",&vel);
	printf("Enter Acceleration : ");
	scanf("%f",&acc);
	printf("Enter Time : ");
	scanf("%f",&time);
	dis=(vel*time)+((acc*time*time)/2);
	printf("Distance Traveled is %f",dis);
}
