#include<stdio.h>

void main()
{
	vote(10);
	
}

void vote(int n)
{ 
   if(n>18)
   {
   	   printf("You are eligible for vote !");
   }
   else
   {
   	   printf("You are not eligible for vote !");
   }
}