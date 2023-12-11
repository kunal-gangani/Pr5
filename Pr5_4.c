#include<stdio.h>
void main(){
	int r,c;
	printf("Enter the Size of Rows: ");
	scanf("%d",&r);
	printf("\nEnter the Size of Columns: ");
	scanf("%d",&c);
	int i,j;
	int a[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		printf("Enter the Value of A[%d][%d]: ",i,j);
		scanf("%d",&a[i][j]);
		}
	}	
	int cn,rn,rsum=0,csum=0;
	printf("\nEnter the Row number: ");
	scanf("%d",&rn);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i==rn){
				printf("%d ",a[rn][j]);
				rsum+=a[rn][j];
			}
		}
	}
	printf("\nThe Sum of Row is : %d",rsum);
	printf("\nEnter the Column number: ");
	scanf("%d",&cn);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(cn==j){
				printf("%d ",a[i][cn]);
				csum+=a[i][cn];
			}
		}
	}
	printf("\nThe Sum of Column is : %d",csum);
}
