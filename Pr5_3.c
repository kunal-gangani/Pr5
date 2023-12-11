#include<stdio.h>
void main(){
	int r,c;
	printf("Enter the Size of Row in Array: ");
	scanf("%d",&r);
	printf("\nEnter the Size of Column in Array: ");
	scanf("%d",&c);
	int i,j;
	int a[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter the Value for Element A[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nThe Transpose of Matrix is: ");
	printf("\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}
