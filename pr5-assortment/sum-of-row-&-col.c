#include<stdio.h>
int main(){
	int n,m,row,col,sum=0,sum2=0;
	printf("Enter array row size :");
	scanf("%d",&n);
	printf("Enter array column size :");
	scanf("%d",&m);
	int arr[n][m];
	//insertion
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("Enter array value :");
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	//sum of row
	printf("Enter row number :");
	scanf("%d",&row);
	if(row<n){
		printf("Element of row %d :",row);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(i==row){
					printf("%d ",arr[i][j]);
				}
			}
		}
		printf("\n");
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(i==row){
					sum+=arr[i][j];
				}
			}
		}
		printf("the sum of a row %d : %d",row,sum);
		
	}else{
		printf("Invalid row number...");
	}
	
	//sum for column
	
	printf("\nEnter column number :");
	scanf("%d",&col);
	if(col<m){
		printf("\nElement of column %d :",col);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(j==col){
					printf("%d ",arr[i][j]);
				}
			}
		}
		printf("\n");
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(j==col){
					sum2+=arr[i][j];
				}
			}
		}
		printf("the sum of a col %d : %d",col,sum2);
		
	}else{
		printf("Invalid column number...");
	}
}