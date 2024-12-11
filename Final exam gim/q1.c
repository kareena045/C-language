#include<stdio.h>
#include<conio.h>

void main()
{
	//write to print odd number from 1 to n while loop.
	
	int n,i;
	
	printf("Enter your n:");
	scanf("%d",&n);
	
	while(i>=n)
	{
		
		if(n%2==1)
		{
			printf("%d",&i);
			
		}
	}
}
