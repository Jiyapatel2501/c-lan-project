#include<stdio.h>
int main(){
	int n;
	printf("Enter the array size :");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter array value :");
		scanf("%d",&arr[i]);
	}
	printf("Negetive elements are :");
	for(int i=0;i<n;i++){
		if(arr[i]<0){
			printf("%d ",arr[i]);
		}
	}
}