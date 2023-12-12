/*
Q2) WAP to find out the Maximum value from the 2-D array.
Enter the size of Row in Array: 3
Enter the size of Column in Array: 3

Enter the Value A[0][0]: 1
Enter the Value A[0][1]: 2
Enter the Value A[0][2]: 5
Enter the Value A[1][0]: 4
Enter the Value A[1][1]: 7
Enter the Value A[1][2]: 8
Enter the Value A[2][0]: 6
Enter the Value A[2][1]: 4
Enter the Value A[2][2]: 1

The Value of A[0][0] is 1
The Value of A[0][1] is 2
The Value of A[0][2] is 5
The Value of A[1][0] is 4
The Value of A[1][1] is 7
The Value of A[1][2] is 8
The Value of A[2][0] is 6
The Value of A[2][1] is 4
The Value of A[2][2] is 1

The Maximum Value is 8
*/
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
