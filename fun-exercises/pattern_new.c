#include<stdio.h>
void main()
{
	int n,j,i;
	printf("\nEnter the number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d",j);
	    }
	    printf("\n");
    }
}

