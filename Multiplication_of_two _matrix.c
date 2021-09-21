#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10][10],b[10][10],c[10][10];
	int k,arow,acoloum,brow,bcoloum,i,j;
    printf("Enter the number of row & coloum for Matrix A\n");
    scanf("%d %d",&arow,&acoloum);
    
    printf("Enter element of First Matrix A : \n");
    for(i=0;i<arow;i++)
    {
        for(j=0;j<acoloum;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the number of row & coloum for Matrix B\n ");
    scanf("%d %d",&brow,&bcoloum);
    
    if(acoloum==brow)
    {
		printf("Enter element of Second Matrix B : \n");
    	for(i=0;i<brow;i++)
    	{
    	    for(j=0;j<bcoloum;j++)
    	    {
        	    scanf("%d",&b[i][j]);
        	}
    	}
	}
	else
	{
		printf("Multiplication of this two matrix is not possible...");
	}
	
    printf("The Sum of Two Matrix is Given below \n");
     for(i=0;i<arow;i++)
    {
        printf("\n");
        for(j=0;j<bcoloum;j++)
        {
        	c[i][j]=0;
      		for(k=0;k<acoloum;k++)
      		{
      			c[i][j]+=a[i][k]*b[k][j];
			}
        }
    }
    for(i=0;i<arow;i++)
    {
    	printf("\n");
    	for(j=0;j<bcoloum;j++)
    	{
    		printf("%d\t",c[i][j]);
		}
	}
    getch();
}

