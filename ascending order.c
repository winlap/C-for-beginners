#include<stdio.h>
#include<time.h>
int i,j;
void sort(int num[],int n);
int main(){
	time_t now;
	time(&now);
	printf("%s",ctime(&now));
    int i,n,num[30];
    printf("Enter the value of n:\n");
    scanf("%d",&n);
	printf("Enter the numbers: ");
       for(i=0;i<n;++i){
	   
       	    scanf("%d",&num[i]);
   }
   sort(num,n);
	return 0;
}
void sort(int num[],int n){
	int a;
	for(i=0;i<n;++i){
		   
       	 for(j=i+1;j<n;++j){
       	 	if(num[i]>num[j]){
       	 		a = num[i];
       	 		num[i] = num[j];
       	 		num[j] = a;
				}
			}
	   }

	   printf("arranged number\n");
	   for(i=0;i<n;++i){
	   	printf("%d\n",num[i]);
	   }
}
