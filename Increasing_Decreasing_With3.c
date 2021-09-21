#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	printf("Enter 3 Numbers : ");
	scanf("%d %d %d",&a,&b,&c);
	
	if( a < b ? ( ( b < c ) ? 1 : 0 ) : 0 )
	{
		printf("Numbers are in Increasing ");
	}
	else if( a > b ? ( ( a > c ) ? 1 : 0 ) :0 )
	{
		printf("Numbers are in Decreasing ");
	}
	else
	{
		printf("Neither Increasing nor Decreasing ");
	}
}
