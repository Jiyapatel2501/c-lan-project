#include<stdio.h>
int main(){
	int score;
	char grade = 'F';
	printf("Enter your score :");
	scanf("%d",&score);
//step-1	

	if (score>100)
	{
		printf("Invalid number");
		
	}
	else
	{
		(score >= 90)?
			grade = 'A'
		:
			(score >= 80) ? grade = 'B': (score>=70) ? grade = 'C' : (score >= 60) ? grade = 'D' : grade ;
		printf("Your grade is %c \n",grade);
		
		//step-2
		
		switch(grade){
		case 'A':
			printf("Excellent work!");
			break;
		case 'B':
			printf("Well Done");
			break;
		case 'C':
			printf("Good Job");
			break;
		case 'D':
			printf("You passed,but you could do better");
			break;
		default:
			printf("Sorry you failed...");
			break;
	}
	
  		//step-3
	
		if(grade!='F')
		{
			printf("\nCongratulations!You are eligible for next level");
		}
		else
		{
			printf("\nPlease try again next time");
		}
	}
	

	
	
}