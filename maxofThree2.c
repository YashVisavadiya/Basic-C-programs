#include<stdio.h>

void main()
{
    int a,b,c;

    printf("Enter Three Numbers : ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b)
    {
    	if(a>c)
    	{
    		printf("\n%d",a);
		}
	}
    if(b>a)
    {
    	if(b>c)
    	{
    	    printf("\n%d",b);	
		}
	}
    if(c>a)
    {
    	if(c>b)
    	{
    		printf("\n%d",c);	
		}
	}
        
}

