#include<stdio.h>
int main(){
	int n;
	int *ptr;
	int arr[100];
    ptr = arr;
	printf("\nEnter the size of array: ");
	scanf("%d",&n);
    for(int i =0;i<n;i++){
    	printf("\nEnter the number at [%d]",i+1);
    	scanf("%d",(ptr+i));
	}
	printf("\nthe array reversesd is: \n");
	for(int i = n-1;i>=0;i--){
		printf("%d\t",*(ptr+i));
	}
    







}