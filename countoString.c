#include <stdio.h>

void main()
{
    char ch[20];
    int count=1;

    printf("Enter a String : ");
    scanf("%s", ch);
    int i=0;
    while (ch[i] != '\0')
    {
        if (ch[i] >= '0' && ch[i] <= '9')
        {
            count=ch[i]-'0';
        }
        else
        {
            for(int j=1;j<=count;j++)
            {
                printf("%c",ch[i]);
            }
            count=1;
        }
        i++;
    }
}
