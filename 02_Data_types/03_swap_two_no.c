// Swap 2 given number entered by user
//

#include<stdio.h>
int main(){

	int x;
	int y;
	printf("\nEnter first number	: ");
	scanf("%d",&x);

	printf("Enter second number	: ");
	scanf("%d",&y);

	y = x+y;
	x = y-x;
	y = y-x;

	printf("\n\nAfter swapping 1st no = %d \n", x);
	printf("After swapping 2nd no = %d \n", y);

	return 0;
}
