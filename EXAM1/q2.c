#include<stdio.h>
#include<conio.h>

main()
{
  int x,y;
  
  printf("Enter x :");
   scanf("%d",&x);
   printf("Enter y :");
   scanf("%d",&y);
   
   x=x+y;
   y=x-y;
   x=x-y;
   
   printf("value of swapping x=%d\n",x);
   printf("value of swapping y=%d\n",y);
}

