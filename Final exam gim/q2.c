#include<stdio.h>
#include<conio.h>

void main()
{
	//write to print min number from 4.
	
	int a,b,c,d;
	
	printf("Enter your a:");
	scanf("%d",&a);
	printf("Enter your b:");
	scanf("%d",&b);
	printf("Enter your c:");
	scanf("%d",&c);
	printf("Enter your d:");
	scanf("%d",&d);
	
	(a<b)?(a<c)?(a<d)?printf("a is minimum"):printf("c is minimum"):printf("d is minimum"):
	(b<c)?(b<d)?printf("b is minimum"):printf("c is minimum"):
		(c<d)?printf("c is minimum"):printf("d is minimum");
}
