//program to find third angle of triangle


#include<stdio.h>
#define TRIANGLE_TOTAL 180
int main()
{
	float a;
	float b;
	float c;
	printf("Enter the value of first angle:");
	scanf("%f",&a);
	printf("\nEnter the value of second angle:");
	scanf("%f",&b);
	c=TRIANGLE_TOTAL-(a+b);
	printf("\nThe value of third angle is %.2f",c);
}