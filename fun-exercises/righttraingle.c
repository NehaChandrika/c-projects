#include<stdio.h>
void main()
{
	int n,j,i;
	printf("This code prints right angle triangle using * ");
	do{
		printf(" \n This program stops only when you enter a negative number");
		printf("\nEnter the height of triangle :");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf(" *");
	    	}
	    	printf("\n");
	    }
    }
    while(n>0);
	printf("Heyy! you just terminated the program. Wanna try it again?? Re-run it");
}