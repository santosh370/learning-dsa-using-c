// "003 Take user input and print the value"

#include<stdio.h>
int main(){
	char name[30];
	printf("Enter your name: ");
	scanf("%s",name);

	printf("Welcome %s in our C Journey.... \n", name);
	return 0;
}
