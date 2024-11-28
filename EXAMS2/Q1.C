#include<stdio.h>
#include<conio.h>

void main()
{
	
	even();
}
int even ()
{
	int i,n;
	printf("Enter n");
	scanf("%d",&n);
	
	for(i=1; i<n; i++)
	{
		if(n%2==0)
		{
			printf("%d",i);
		}
	}
}
