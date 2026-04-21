#include<stdio.h>
int main(){
	
	
	int num,sum,first_num,last_num ;
	
	printf("Enter any number :");
	scanf("%d",&num);
	
	first_num=num%10;
	
	while(num!=0){
		last_num=num%10;
		num/=10;
	}
	
	sum=last_num+first_num;
	printf("The sum of first and last number is : %d",sum);
	
}