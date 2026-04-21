#include<stdio.h>
int main(){
	int count=0,num;
	printf("Enter any number :");
	scanf("%d",&num);
	while(num!=0){
		int last_num=num%10;
		num/=10;
		count++;
	}
	printf("Total number of digit is %d.",count);
	
	
} 