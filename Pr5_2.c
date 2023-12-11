#include<stdio.h>
void main(){
	int r,c,i,j,max;
	printf("Enter the size of Row in Array: ");
	scanf("%d",&r);
	printf("\nEnter the size of Column in Array: ");
	scanf("%d",&c);
	int a[r][c];
	int prev=a[0][0];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter the Value A[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	max=a[0][0];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("\nThe Value of A[%d][%d] is %d",r,c,a[i][j]);
			if(max<a[i][j]){
				max=a[i][j];
			}
		}
	}
	printf("\n\nThe Maximum Value is %d ",max);
}
