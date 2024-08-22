#include<stdio.h>

void main()
{
	char grade;
	int mark;
	
	printf("enter your mark :");
	scanf("%d",&mark);
	
	grade=(mark>=90 && mark<=100)? 'A'
	:(mark>=80 && mark<=90)? 'B'
	:(mark>=70 && mark<=80)? 'C'
	:(mark>=60 && mark<=70)? 'D'
	:(mark>=40 && mark<=60)? 'E'
    :'F';
    
    printf("your mark %c",grade);

    switch (grade)
    { 
   	    case 'A':printf("Excellent Work\n");
   	    break;
        case 'B':printf("Well done\n");
   	    break;
   	    case 'C':printf("Good job\n");
   	    break;
   	    case 'D':printf("You passed ,but you could do better\n");
   	    break;
        case 'E':printf("You passed ,but you could do better\n");
   	    break;
        case 'F':printf("SORRY,you failed\n");
        break;
		}

        if(grade =='A' || grade =='B'|| grade =='C' || grade =='D'|| grade =='E')
        {
        	printf("congratulation!you are eligible for next level\n");
		}
		else
		{
			printf("please try again next time\n");
		}
   
}


   
