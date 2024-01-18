/*Week 1: (B) - Input/Output Program in C*/
//Created by Janay Harris on 5/25/2021

#include <stdio.h>

int main() 
{
	/* I decided to make another program. I used float for it to be precise and be as accurate as a calculator. Week 1 is only 
	about Getting Started and Primary Data Types, while I would like to add conditions for sophistication, I only used the knowledge
	provided in the first two chapters. This design accounts for operations where the numbers are positive or negative whole numbers, 
	the first number can be larger than the second number. Unfortunately the design of the program doesn't include decimals, because I 
	see too many .0 in execution as an eyesore. */
	
	//Intialize and Declare variables
	char cPress = '\0';
 	float fNum1= 5; 
	float fNum2= 7;
	float fSum, fSub, fMul, fDiv ; 

	printf("\n\tInput/Output Program\n");
	
	printf("\t Press any key to continue");
	scanf("%c", &cPress); 

	//Tell the user to input numbers
	printf("\nRad! Enter 5 >> ");
 	scanf("%f", &fNum1); 
	

	printf("Cool, go on and Enter 7 >> ");
 	scanf("%f", &fNum2);
	

	//Output the numbers unchanged
	printf("The first number is %.0f\n", fNum1);
	printf("The second number is %.0f\n", fNum2);

	
	//Output the sum 
 	fSum=fNum1+fNum2; 
	printf("The sum is %.0f\n",fSum); 
	
	//Output the difference 
	fSub=fNum1-fNum2; 
	printf("The difference is %.0f\n", fSub);
	
	
	//Output the product of these numbers 
	fMul=fNum1*fNum2;
	printf("The product is %.0f\n", fMul); 
	
	
	/*The previous numbering schemes are kept at .0 to give the program a cohesive look. For accuracy I gave quotient a 0.2 numbering 
	scheme.*/

	//Output the quotient of these numbers
	fDiv = fNum1/fNum2; 
	printf("The quotient is %0.2f\n", fDiv); 

	printf("\n\tCheck my math on the Calculator, dude!\n");
	return 0;
 }