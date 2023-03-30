#include<stdio.h>
void sort(int arr[], int n);
int binary(int arr[], int n, int x);
int main(){
	int arr[] = {22,55,6,33,77,11,43,42,65,54,76};
	int n = sizeof(arr) / sizeof(arr[0]);
	sort(arr,n);
	int x;
	printf("\nEnter the number you want to find: ");
	scanf("%d",&x);
	int index = binary(arr,n,x);
	if(index != -1)
	printf("\nThe number is found at index %d",index);
	else
	printf("\nnumber not found");
}
void sort(int arr[], int n){
	for(int i = 0; i < n ; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[i] > arr[j]){
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp; 
			}
		}
	}
}
int binary(int arr[], int n , int x){
	int left = 0,right = n-1;
	while(left <= right){
		int mid = (left + right) /2;
		if(arr[mid] == x){
			return mid;
		}
		if(arr[mid] < x){
			left = mid + 1;
		}
		if(arr[mid] > x){
			right = mid - 1;
		}
	}
	return -1;
}