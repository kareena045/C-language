#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	printf("enter your num :");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("num is positive :");
	}
	else if(num==0)
	{
		printf("num is neutral :");
	}
	else
	{
		printf("num is negative :");
	}
}