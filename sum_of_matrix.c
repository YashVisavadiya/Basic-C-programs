#include<stdio.h>
#include<conio.h>

void main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("Enter element of First Matrix A : \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter element of First Matrix B : \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("The Sum of Two Matrix is Given below \n");
     for(i=0;i<=2;i++)
    {
        printf("\n");
        for(j=0;j<=2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d",c[i][j]);
        }
    }
    getch();
}