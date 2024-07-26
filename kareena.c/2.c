#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	
	printf("enter the value x :");
	scanf("%d",&x);
	printf("enter the value y :");
	scanf("%d",&y);
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	printf("value after swapping of x=%d\n",x);
	printf("value after swapping of y=%d",y);
}