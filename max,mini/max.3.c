#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	
	printf("enter your a :");
	scanf("%d",&a);
	printf("enter your b :");
	scanf("%d",&b);
	printf("enter your c :");
	scanf("%d",&c);
    printf("enter your d :");
	scanf("%d",&d);
	
	(a>b)?(a>c)?(a>d)?printf("a is maxium"):printf("c is maximum"):printf("d is maximum"):
	(b>c)?(b>d)?printf("b is maximum"):printf("c is maximum"):
	(c>d)?printf("c is maximum"):printf("d is maximum");
	
	
}