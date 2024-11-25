#include<stdio.h>

//simple calculator

int add(int num1,int num2)
{
	int add;
	add=num1+num2;
	return add;
}
int sub(int num1,int num2)
{
	int sub;
	sub=num1-num2;
	return sub;
}
int multiply(int num1,int num2)
{
	int multiply;
	multiply=num1*num2;
	return multiply;
}
int div(int num1,int num2)
{
	int div;
	div=num1/num2;
	return div;
}
int module(int num1,int num2)
{
	int module;
	module=num1%num2;
	return module;
}
int main()
{
	int num1,num2,choice;
	
	printf("Enter number-1: ");
	scanf("%d",&num1);
	
	printf("Enter number-2: ");
	scanf("%d",&num2);
	printf("ENTER YOUR CHOICE: ");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("The addition is %d",add(num1,num2));
	}
	else if(choice==2)
	{
		printf("The subraction is %d",sub(num1,num2));
	}
	else if(choice==3)
	{
		printf("The multiplication is %d",multiply(num1,num2));
	}
	else if(choice==4)
	{
		printf("The division is %d",div(num1,num2));
	}
	else if(choice==5)
	{
		printf("The module is %d",module(num1,num2));
	}
	else
	{
		printf("Enter vaild value:");
	}
	
	return 0;
	
}