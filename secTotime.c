#include<stdio.h>

void main()
{
	int h,m,s,total_s;
	
	printf("Enter Second : ");
	scanf("%d",&total_s);
	
	h=total_s/3600;
	total_s-=h*3600;
	m=total_s/60;
	total_s-=m*60;
	s=total_s;
	printf("%d : %d : %d ",h,m,s);
}
