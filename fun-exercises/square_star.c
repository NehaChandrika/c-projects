#include<stdio.h>
void main()
{
	int n, j, i;
	printf("This code prints square using * :)");
	printf("\nEnter the side of the square  :");
	scanf("%d",&n);
	printf("This program stops printing square using * until you enter any negative number");
	if( n > 0 ) {
		for(i = 1 ;i <= n ;i++) {
			printf("\n *");
			for(j = 1 ; j < n ; j++){
				printf(" *");
			}
		}
	else {
		 printf(" THANK YOU :)");
	}		
	}
}
