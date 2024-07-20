#include<stdio.h>
#include<conio.h>

 void main()
{
	int x=10,y=18,temp;
	
	printf("enter the value of x :");
	scanf("%d",&x);
	printf("enter the value of y :");
	scanf("%d",&y);
	temp=x;
	x=y;
	y=temp;
	printf("value after swapping of x=%d",x);
	printf("value after swapping of y=%d",y);
}