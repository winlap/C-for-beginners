#include<stdio.h>
struct mystruct{
	int roll;
	int marks;
	char name[10];
	
};
int main(){
	struct mystruct s[30],tempt;
	int i,j,n;
	printf("Enter the number of students: ");
	scanf("%d",&n);
	for(i=0,i;i<n;i++){
	
	printf("Enter name,Roll,Marks: ");
	scanf("%s%d%d",&s[i].name,&s[i].roll,&s[i].marks);
}
for(i=0;i<n-1;i++){
	for(j=i+1;j<n;j++){
		if(s[i].marks<s[j].marks){
			tempt = s[i];
			s[i] = s[j];
			s[j] = tempt;
		}
	}
}
printf("sorted records are");
for(i=0;i<n;i++){
	printf("name: %s\nroll: %d\nmarks: %d\n",s[i].name,s[i].roll,s[i].marks);
}
return 0;
}
