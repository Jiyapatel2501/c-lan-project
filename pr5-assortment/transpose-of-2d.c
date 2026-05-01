#include<stdio.h>
int main(){
	int n;
	printf("Enter array size :");
	scanf("%d",&n);
	int arr[n][n],arr2[n][n];
	//insertion
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("Enter array value :");
			scanf("%d",&arr[i][j]);
		}	
		printf("\n");
	}
	//loop for transpose
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				arr2[i][j]=arr[i][j];
			}else{
				arr2[j][i]=arr[i][j];
			}
		}
	}
	//iteration
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",arr2[i][j]);
		}
		printf("\n");	
	}
}