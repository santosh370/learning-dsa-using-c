// 005 Variable declarations

#include<stdio.h>

int main()
{
	printf("You can declare variable line below: \n\ndata_type variable_name; \ndata_type variable_name = value; \n\n");
	int i=10;
	float j=10.4;
	char c='A';

	const int VALUE=100;
	
	printf("\nInterger value of i = %d", i);
	printf("\nFloat value of j = %f",j);
	printf("\nCharecter value of C is : %c", c);

	printf("\nContant variable  value is : %i\n", VALUE);

	return 0;

}
