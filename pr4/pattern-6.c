#include<stdio.h>
int main(){
 	for(int i=1;i<=5;i++){
 		for(int j=1;j<=i;j++){
 			printf("%d ",j);
		 }
		for(int s=i;s<5;s++){
			printf("  ");
		}
		for(int k=i;k<5;k++){
			printf("  ");
		}
		for(int z=i;z>=1;z--){
			printf("%d ",z);
		}
		printf("\n");
	 }
}