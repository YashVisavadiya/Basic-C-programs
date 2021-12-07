#include<stdio.h>

void main()
{
    char ch[20];
    int count=1;

    printf("Enter a String : ");
    scanf("%s",ch);

    int i=1;

    while(ch[i]!='\0')
    {
        if(ch[i]==ch[i-1])
        {
            count++;
        }
        else
        {
            printf("%c%d",ch[i-1],count);
            count=1;
        }
        i++;
    }
    printf("%c%d",ch[i-1],count);
}