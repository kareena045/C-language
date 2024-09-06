#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,multiply;
    
    printf("Enter n :");
    scanf("%d",&n);
    
    for(i=1 ; i<=10 ; i++)
    {
    	multiply=i*n;
    	printf("%d %d=%d \n",n,i,multiply);
	}
}