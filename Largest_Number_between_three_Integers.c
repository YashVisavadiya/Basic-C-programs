/* To Find Mxximum of Three Variable */

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	
	printf("Enter Three Numbers : ");
	scanf("%d %d %d",&a,&b,&c);
	d=(a>b&&a>c) ? a:((b>a&&b>c) ? b:c) ;
	printf("Largest Number : %d",d);
	getch();
}
