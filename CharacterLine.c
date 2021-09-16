#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char word[100];
	int i=0,j;
	gets(word);
	
	for( j=0;j<strlen(word);j++ )
	{
		if( word[i] != ' ' )
		{
			printf("%c",word[i]);
		}
		else
		{
			printf("\n");
		}
		i++;
	}
}
