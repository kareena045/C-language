#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	printf("enter n:");
	scanf("%d",&i);
	
	do
	{
		printf("%d ",i);
		i++;
	}while(i<=10);
}