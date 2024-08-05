#include<stdio.h>
#include<conio.h>

void main()
{
    float maths,english,science,sum,averge;
	printf("enter your math marks :");
	scanf("%f",&maths);
	
	printf("enter your english marks :");
	scanf("%f",&english);
	
	printf("enter your science marks :");
	scanf("%f",&science);
	
    sum=maths+english+science;
	averge=sum/3;
	
	printf("the averge is %f\n",averge); 
	
	if (averge>=90 && averge<100)
	{
		printf(" grade : A+");
	}
	else if(averge>=80 && averge<89)
	{
		printf("grade : A ");
	}
	else if (averge>=70 && averge<79)
    {
    	printf("grade : B+");
	}	
	else if(averge>=60 && averge<69)
	{
		printf("grade : B ");
	}
	else if(averge>=50 && averge<50)
	{
		printf("grade : C+");
	}
	else if(averge>=40 && averge<49)
	{
		printf("grade : C ");
	}
	
}