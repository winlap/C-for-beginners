#include <stdio.h>

int main() {
    int arr[5];
    int i;
    printf("\nEnter the elements of arrray: ");
    for(i=0;i<5;i++){
    	scanf("%d",&arr[i]);
	}
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    for ( i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The largest element is %d", max);

    return 0;
}

