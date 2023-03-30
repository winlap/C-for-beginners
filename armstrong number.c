#include<stdio.h>
#include<math.h>
int main(){
	int originalnumber,remainder,number,result = 0,n = 0;
	printf("\nEnter the number: ");
	scanf("%d",&number);
	originalnumber = number;
	while(originalnumber != 0){
		originalnumber /= 10;
		++n;
	}
	originalnumber = number;
	while(originalnumber != 0){
		remainder = originalnumber % 10;
		result += pow(remainder,n);
		originalnumber /= 10;
	}
	if(result == number){
		printf("\n%d is Armstong number.",number);
	}
	else 
	printf("\n%d is not Armstrong number.",number);
}
