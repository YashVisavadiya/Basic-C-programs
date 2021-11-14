#include<stdio.h>

void main()
{
    char ch;

    printf("Enter a character : ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
        printf("\nCapital\n");
    else if(ch>='a' && ch<='z')
        printf("\nSmall\n");
    else if(ch>='0' && ch<='9')
        printf("\nDigit \n");
    else if( (ch>=32 && ch<=47) || (ch>=57 && ch<=64) || (ch>=91 && ch<=96 ) || (ch>=123 && ch<=126) )
        printf("\nSpecial Character\n");
}
