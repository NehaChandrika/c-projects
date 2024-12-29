#include<stdio.h>
void main()
{
	int row,column,j,i;
	printf("This code prints rectangle using * ");
	do{
		printf(" \n This program stops only when you enter a negative number");
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
    while(row&&column > 0);
	printf("Heyy! you just terminated the program. Wanna try it again?? Re-run it");
}