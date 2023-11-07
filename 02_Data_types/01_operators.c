// 01 - C Operators

/*
 * ********************************
 *	+ 	| Addition	***
 *	-	| Substraction  ***
 *	/	| Division	***
 *	%	| Modulus	***
 *	*	| Multiply	***
 *
 *	>	| Greater than	***
 *	<	| Less than	***
 *	>=	| GT or ET	***
 *	<=	| LT or ET	***
 *	==	| ET		***
 *	!=	| Not ET	***
 *
 *	&&	| AND Operator	***
 *	||	| OR Operator	***
 *	!	| NOT Operator	***
 */


#include<stdio.h>

int main()
{
	int x=10;
	int y=5;
	int result = 0;

	printf("Sum of : %d + %d = %d \n", x,y, (x+y));
	printf("Sub of : %d - %d = %d \n", y, x, (y-x));
	printf("Multiply of : %d * %d = %d \n", x,y,(x*y));
	printf("Sub of : %d - %d = %d \n", x,y,(x-y));
	printf("Division of %d / %d = %d \n", x,y, (x/y));
	printf("Modulus of %d and %d = %d \n", x,y,(x%y));


	return 0;
}
