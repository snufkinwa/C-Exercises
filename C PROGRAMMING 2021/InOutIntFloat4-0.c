/*Week 1: (B) - Input/Output Program in C*/
//Created by Janay Harris on 5/27/2021

#include <stdio.h>

int main() 
{
	/*Welcome to Version 3.0! I used int for one user input, adding, subtracting and multiplying. I used float for one user input and 
	the division for accuracy. This program accounts for positive and negative whole numbers, the first number can be smaller than the 
	second number. Calculations are correct and can be checked on the calculator.*/
	
	//Intialize and Declare variables
	char cPress = '\0';
 	int iNum1 = 0; 
	float dNum2 = 0;
	int iSum, iSub, iMul; 
	float dDiv; 
	
	printf("\n\tInput/Output Program\n");
	
	printf("\t Press [ENTER] to continue");
	scanf("%c", &cPress); 
	
	//Tell the user to input numbers
	printf("\nRad! Enter 5 >> ");
 	scanf("%d", &iNum1); 
	

	printf("Cool, go on and Enter 7 >> ");
 	scanf("%f", &dNum2);
	

	//Output the numbers unchanged
	printf("The first number is %d\n", iNum1);
	printf("The second number is %.0f\n", dNum2);

	
	//Output the sum 
 	iSum=iNum1+dNum2; 
	printf("The sum is %d\n",iSum); 
	
	//Output the difference 
	iSub=iNum1-dNum2; 
	printf("The difference is %d\n", iSub);
	
	
	//Output the product of these numbers 
	iMul=iNum1*dNum2;
	printf("The product is %.d\n", iMul); 
	
	
	/*The  quotient is at a 0.3 numbering scheme.*/

	//Output the quotient of these numbers
	dDiv = iNum1/dNum2; 
	printf("The quotient is %0.3f\n", dDiv); 

	printf("\n\tCheck my math on the Calculator, dude!\n");
	return 0;
 }