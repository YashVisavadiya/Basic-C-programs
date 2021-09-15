/* Enter Amount By user and print Minimum amount of notes like 500,100,50,20,10,5,2,1   */

#include <stdio.h>

int main()
{
    int i,a[8]={500,100,50,20,10,5,2,1};

	int n;
	int m;
	
	printf("Enter Amount : ");
	scanf("%d",&n);
	m=n;	
	for(i=0;i<8;i++)
	{
		n = m /a[i];
		m = m % a [i];
		
	    printf("%d : %d \n",a[i],n);
	}
    return 0;
}

