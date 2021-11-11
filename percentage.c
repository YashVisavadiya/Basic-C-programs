#include<stdio.h>

void main()
{
	int i,sub[5];
	float per=0;
	int maxmarksofSub;
	printf("enter how many marks test is : ");
	scanf("%d",&maxmarksofSub);
	for(i=0;i<5;i++)
	{
		printf("Enter marks in %d 's subject : ",i+1);
		scanf("%d",&sub[i]);
		per+=sub[i];
	}
	per=(per/(5*maxmarksofSub))*100;
	printf("Percentage is %.2f",per);
}
