#include<stdio.h>
#include<conio.h>

void main()
{
	//write a program in c to check whether a number is an even or not using user define function.
	
	int num;
	checkeven(num);
	return 0;
}
int checkeven()
{
	int num;
	
	printf("Enter your num :");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf(" is an even number :");
	}
	else
	{
		printf("is not even number :");
	}
}
