#include<stdio.h>
int main(){
	int n,m;
	printf("Enter array row size :");
	scanf("%d",&n);
	printf("Enter array column size :");
	scanf("%d",&m);
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("Enter array value :");
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	int max=arr[0][0];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(max<arr[i][j]){
				max=arr[i][j];
			}
		}
	}
	printf("The largest element is %d",max);
}