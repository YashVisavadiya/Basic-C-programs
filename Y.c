/* Print a block of your names first letter with the use of # */

#include<stdio.h>
#include<conio.h>

void main()
{
	int row,col;     
	
	for(row=0;row<=2;row++)
	{
		for(col=1;col<=7;col++)
		{
		
			if(col==row+1||col==7-row)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	for(row=3;row<=7;row++)
	{
		for(col=1;col<=7;col++)
		{
			if(col==4)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	getch();
}

