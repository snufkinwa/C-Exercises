/*Week 1: (B) - Input/Output Program in C*/
//Created by Janay Harris on 5/24/2021

#include <stdio.h>

int main()
{
	/*I decided to use int to ensure my program was simple. If I used floating numbers I would have to use numbering schemes to make sure only
 	a certain amount of decimal points was shown in the results. To have precision I incorporated a remainder value, to show how many times 
	that number division is completed fully.*/

	//Intialize and Declare variables
	int iOperand1= 0;
	int iOperand2=0;

	printf("\n\tInput/Output Program by Janay Harris\n");

	//Tell the user to input those numbers
	printf("\nEnter first operand >> ");
	scanf("%d", &iOperand1);

	printf("Enter second operand >> ");
	scanf("%d", &iOperand2);

	//Output the same numbers unchanged
	printf("The first operand is %d\n", iOperand1);
	printf("The second operand is %d\n", iOperand2);

	//Output the sum and difference of those numbers
	int iSum = iOperand1 + iOperand2;
	printf("The sum is %d\n", iSum);
	int iDifference = iOperand1 - iOperand2;
	printf("The difference is %d\n", iDifference);

	//Output the product of these numbers
	int iProduct = iOperand1 * iOperand2;
	printf("The product is %d\n", iProduct);

	//Output the quotient of these numbers
	int iQuotient = iOperand1 / iOperand2;
	int iRemainder = iOperand1 % iOperand2;
	printf("The quotient is %d.%d\n", iQuotient, iRemainder);
	return 0;
}
