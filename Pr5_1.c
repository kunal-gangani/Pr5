/*
Q1) WAP to take out the negative elements from an 1-D Array.
Enter the Array's Size: 6

Enter value for A[0]: 2
Enter value for A[1]: 4
Enter value for A[2]: 5
Enter value for A[3]: -4
Enter value for A[4]: 7
Enter value for A[5]: -8

The Values of array A are
Element A[0] 2:
Element A[1] 4:
Element A[2] 5:
Element A[3] -4:
Element A[4] 7:
Element A[5] -8:
The Negative values of array A are:
A[3] :-4
*/
#include<stdio.h>
void main(){
	int n;
	printf("Enter the Array's Size: ");
	scanf("%d",&n);
	printf("\n");
	int i,a[n];
	for(i=0;i<n;i++){
		printf("Enter value for A[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("\nThe Values of array A are");
	for(i=0;i<n;i++){
		printf("\nElement A[%d] %d:",i,a[i]);
	}
	printf("\nThe Negative values of array A are: ");
		for(i=0;i<n;i++){
			if(a[i]<0){
				printf("\nA[%d] :%d ",i,a[i]);
			}
		}
}
