#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,a=65;
	
	for(i=0;i<5;i++)
	{
		a=65+i;
		for(j=0;j<=i;j++)
		{
			printf("%c",a--);
		}
		printf("\n");
	}
	
}
