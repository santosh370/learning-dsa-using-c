// In this script we will learn how to take input from user 
//
#include<stdio.h>
#include<string.h>
int main()
{
	char name[50];
	char mobile[12];
	printf("Enter your name :");
	scanf("%s",name);

	printf("Enter your mobile number :");
	scanf("%s",mobile);

	printf("Hello %s , I am reachable %s \n", name, mobile);

	return 0;
}
