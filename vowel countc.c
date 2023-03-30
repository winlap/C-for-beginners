#include<stdio.h>
#include<string.h>
int main(){
	char str[30];
	int i,count = 0;
	printf("Enter the string: ");
	gets(str);
	strlwr(str);
	for(i=0;i<strlen(str);i++){
		if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'){
		count++;
		}
	}
	int con = 0;
	con = strlen(str) - count;
	printf("\nThe number of vowels is: %d",count);
	printf("\nThe number of consonat is: %d",con);
}
