#include<stdio.h>
void main()
{
	int n,j,i;
	printf("This code prints right angle triangle using numbers ");
	do{
		printf(" \n This program stops only when you enter a negative number");
		printf("\nEnter a number :");
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
    while(n>0);
	printf("Heyy! you just terminated the program. Wanna try it again?? Re-run it");
}


