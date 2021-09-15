/* To Print ANCII Value of a character */

#include<stdio.h>
#include<conio.h>

void main()
{
	char a;
	
	printf("\nEnter a Character : ");
	a=getch();
	printf("%c",a);
	printf("\nANCII value of given Character : %d",a);
	getch();
}
