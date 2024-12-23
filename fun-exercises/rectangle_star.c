#include<stdio.h>
void main()
{
	int row,column,j,i;
	printf("\nEnter the row length to print rectangle :");
	scanf("%d",&row);
	printf("\nEnter the column length to print rectangle :");
	scanf("%d",&column);
	for(i=1;i<=row;i++)
	{
		printf("\n *");
		for(j=1;j<=column;j++)
		{
			printf(" *");
	    }
    }
}
