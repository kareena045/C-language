#include<stdio.h>

void main()
{
	int a,b,c,d,e;
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	printf("enter c :");
	scanf("%d",&c);
	printf("enter d :");
	scanf("%d",&d);
	printf("enter e :");
	scanf("%d",&e);
	
	//a,b,c,d,e
	if(a>b)
	{
		//a,c,d,e
		if(a>c)
		{
			//a,d,e
			if(a>d)
			{
				//a,e
				if(a>e)
				{
					//a
					printf("a is maximum");
				}
				else
				{
					//e
					printf("e is maxmium");
				}
			}
			else
			{
				//d,e
				if(d>e)
				{
					//d
					printf("d is maximum");
				}
				else
				{
					//e
					printf("e is maximum");
				}
			}
		}
		else
		{
			//c,d,e
			if(c>d)
			{
				//c,e
				if(c>e)
				{
					//c
					printf("c is maximum");
				}
				else
				{
					//e
					printf("e is maximum");
				}
			}
			else
			{
				//d,e
				if(d>e)
				{
					//d
					printf("d is maximum");
				}
				else
				{
					//e
					printf("e is maximum");
				}
			}
		}
	}
	else
	{
		//b,c,d,e
		if(b>c)
		{
			//b,d,e
			if(b>d)
			{
				//b,e
				if(b>e)
				{
					//b
					printf("b is maximum");
				}
				else
				{
					//e
					printf("e is maximum");
				}
			}
			else
			{
				//d,e
				if(d>e)
				{
				    //d
					printf("d is maximum");	
				}
				else
				{
					//e
					printf("e is maximum");
				}
				
					
				
			}
		}
		else
		{
			//c,d,e
			if(c>d)
			{
				//c,e
				if(c>e)
				{
					//c
					printf("c is maximum");
				}
				else
				{
					//e
					printf("e is maximum");
				}
			}
			else
			{
				//d,e
				if(d>e)
				{
					//d
					printf("d is maximum");
				}
				else
				{
					//e
					printf("e is maximum");
				}
			}
		}
	}
}