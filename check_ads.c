#include<stdio.h>
#include<conio.h>

void main()
{
	char a;
	printf("Input Any Character : ");
	scanf("%c",&a);
	
	if( a >= 48 && a <= 57)
		printf("%c is a Digit",a);
	if( a >= 33 && a <= 46 || a >= 58 && a <= 64 || a >=91 && a <= 96 || a >= 123 && a <= 126 )
		printf("%c is a Special Character");
	if(( a >= 65 && a <= 90 )||(a >= 97 && a <= 122 ))
		printf("%c is an Alphabet");
}
