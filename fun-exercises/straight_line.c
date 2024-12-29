#include<stdio.h>
void main()
{
	int n, j, i;
	do{
	printf("\n Enter the number upto which the star have to be printed : ");
	scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			printf("*");
		}
    }
	while(n>0);
	printf("\n This program stops printing * until you enter any negative number");	
}