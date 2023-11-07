// Variable declarations in C

#include<stdio.h>

int main()
{
	printf("You can declare variable like below: \n\ndata_type variable_name; \ndata_type variable_name = value; \n\n");
	
	int i=10; 	// Integer variable
	float j=10.4; 	// Float type variable
	char c='A'; 	// Charecter or string variable
	const int VALUE=100; // Constant variable declaration
	double db = 90902012; // Double var declaration..
	
	
	printf("\nInterger value of i = %d", i);
	printf("\nFloat value of j = %f",j);
	printf("\nCharecter value of C is : %c", c);

	printf("\nContant variable  value is : %i\n", VALUE);

	return 0;

}
