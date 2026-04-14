//program to find gross salary

#include<stdio.h>
int main()
{
	float hra;
	float da;
	float ta;
	int base_salary;
	int gross_salary;
	printf("Enter the rate of HRA :");
	scanf("%f",&hra);
	printf("\nEnter the rate of DA :");
	scanf("%f",&da);
	printf("\nEnter the rate of TA :");
	scanf("%f",&ta);
	printf("\nEnter the base salary :");
	scanf("%d",&base_salary);
	gross_salary=((base_salary*hra/100)+(base_salary*da/100)+(base_salary*ta/100))+base_salary;
	printf("\nGross-salary:%d",gross_salary);
}