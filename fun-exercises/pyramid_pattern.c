#include<stdio.h>
void main()
{
	int n,j,i;
	do {
	printf("This program stops only when you enter negative number ");
	printf("\nEnter the height of pyramid :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" *");
	    }
	    printf("\n");
    }
    for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf(" *");
	    }
	    printf("\n");
    }
	}
	while(n>0);
	printf("THANK YOU");
}
