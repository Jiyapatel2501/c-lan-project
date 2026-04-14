//program to convert celsius in fahrenhit


#include<stdio.h>
int main()
{
	float c;
	float f;
	printf("Enter the Temprature in celsius:");
	scanf("%f",&c);
	f=9/5*c+32;
	printf("\n The Temprature in fahrenhit is %.2f",f);
	
}