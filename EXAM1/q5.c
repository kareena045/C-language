#include<stdio.h>
#include<conio.h>

main()
{
   int n,count;
   
   printf("Enter n :");
   scanf("%d",&n);
   
   for(count=0;n>0;count++)
   {
   	 n=n/10;
   }
   printf("count=%d\n",count);
   
}

