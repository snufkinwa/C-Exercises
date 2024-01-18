/*Week 1: (B) - Input/Output Program in C*/
//Created by Janay Harris on 5/25/2021

#include <stdio.h>

int main() 
{
	/*Welcome to Version 2.0! I added a few spiffy lines and realized my program is a dictatorship, not a democracy. I set my numbers to 5 and 7.
	I used int for  for it to be precise and as accurate as a calculator. In my original prototype I used int, adding on the remainder, but it was not 
	reliable. Float calculations are correct when double checked written or calculator. Week 1 is only about Getting Started and Primary Data Types, 
	while I would like to add conditions and loops for sophistication, I only used the knowledge provided in the first two chapters. I changed the 
	values of fNum1 and fNum2 to the numbers I wanted to be entered, I had the keyword const in front of it, it does not deter the ability of the user 
	to disobey me. I made the format go back to fNum1 and fNum2 to be equal to zero, to keep my variables clean and no worries it will not function in 
	a different IDE. (PS Cygwin rocks!) The design accounts for operations where the numbers are positive or negative whole numbers, the first number 
	can be smaller than the second number. Unfortunately, the design of the program doesn't include decimals, because I see too many .0 in execution 
	as an eyesore. There are various ways to avoid excessive .0, it is also advanced, I want to stay within the limits of Chapter 1 and Chapter 2. */
	
	//Intialize and Declare variables
	char cPress = '\0';
 	int iNum1 = 0; 
	double dNum2 = 0;
	int iSum, iSub, iMul; 
	double dDiv; 
	
	printf("\n\tInput/Output Program\n");
	
	printf("\t Press [ENTER] to continue");
	scanf("%c", &cPress); 
	
	//Tell the user to input numbers
	printf("\nRad! Enter 5 >> ");
 	scanf("%d", &iNum1); 
	

	printf("Cool, go on and Enter 7 >>");
 	scanf("%lf", &dNum2);
	

	//Output the numbers unchanged
	printf("The first number is %d\n", iNum1);
	printf("The second number is %.0lf\n", dNum2);

	
	//Output the sum 
 	iSum=iNum1+dNum2; 
	printf("The sum is %d\n",iSum); 
	
	//Output the difference 
	iSub=iNum1-dNum2; 
	printf("The difference is %d\n", iSub);
	
	
	//Output the product of these numbers 
	iMul=iNum1*dNum2;
	printf("The product is %.d\n", iMul); 
	
	
	/*The previous numbering schemes are kept at .0 to give the program a cohesive look. For accuracy I gave quotient a 0.2 numbering 
	scheme.*/

	//Output the quotient of these numbers
	dDiv = iNum1/dNum2; 
	printf("The quotient is %0.2lf\n", dDiv); 

	printf("\n\tCheck my math on the Calculator, dude!\n");
	return 0;
 }