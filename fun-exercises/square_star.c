#include<stdio.h>
void main()
{
	int n,j,i;
	printf("\nEnter the side of the square  :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n *");
		for(j=1;j<n;j++)
		{
			printf(" *");
		}
		
	}
}
