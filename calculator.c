#include<stdio.h>

void main()
{
    int choice=1000,a,b;

    printf("1.Addition\n");
    printf("2.Substration\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("0.Exit\n");
    
    while(choice!=0)
    {
        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch choice
        {
            case 1:
            {   
                printf("\nEnter Two Numbers : ");
                scanf("%d %d ",&a,&b);
                printf("Addition of %d and %d is %d",a,b,(a+b));
                break;
            }
            case 2:
            {
                printf("\nEnter Two Numbers : ");
                scanf("%d %d ",&a,&b);
                 printf("Substraction of %d and %d is %d",a,b,(a-b));
                break;
            }
            case 3:
            {
                printf("\nEnter Two Numbers : ");
                scanf("%d %d ",&a,&b);
                 printf("Multiplication of %d and %d is %d",a,b,(a*b));
                break;
            }
            case 4:
            {
                printf("\nEnter Two Numbers : ");
                scanf("%d %d ",&a,&b);
                 printf("Division of %d and %d is %d",a,b,(a/b));
                break;
            }
            case 0:
            {
                break;
            }
            default:
            {
                printf("\nEnter correct choice Try again ...");
                break;
            }
        }
    }
}