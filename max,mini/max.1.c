#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	printf("enter your a :");
	scanf("%d",&a);
	printf("enter your b :");
	scanf("%d",&b);
	printf("enter your c :");
	scanf("%d",&c);
	
	(a>b)?(a>c)?printf("a is maximum") : printf("c is maximum"):(b>c)? printf("b is maximum") : printf("c is maximum");
}