// Swap 2 numbers with the help of 3rd variable
//

#include<stdio.h>

int main()
{
	int x,y,z;
	printf("Enter 1st number : ");
	scanf("%d", &x);

	printf("Enter 2nd number : ");
	scanf("%d", &y);

	z=x+y;
	x=z-x;
	y=z-x;

	printf("\n\nAfter swapping \n\n1st no : %d \n2nd no : %d\n",x,y);
	return 0;

}
