// In this script we will learn how to take input from user 
// Add 2 numbers taking input from user

#include<stdio.h>
int main()
{
	int x,y,res;
	printf("Enter 1st number :");
	scanf("%d",&x);

	printf("Enter 2nd number :");
	scanf("%d",&y);

	printf("\nSum : %d \n", (x+y));
	printf("Sub : %d \n", (x-y));
	printf("Multiply : %d \n", (x*y));
	printf("Division : %d \n", (x/y));

	return 0;
}
