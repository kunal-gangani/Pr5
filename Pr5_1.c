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
