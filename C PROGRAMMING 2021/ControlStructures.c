//Week 2: Control Structures 
//Created by Janay Harris on 6/5/21

#include <stdio.h>

int NO_RESULT = 0; //Global Scope Variable 

// Function to add two integers
int add(int a, int b) {
	return a + b;
}

// Function to subtract two integers
int subtract(int a, int b) {
	return a - b;
}

// Function to multiply two integers
int multiply(int a, int b) {
	return a * b;
}

// Function to divide two integers
int divide(int a, int b) {
	/*Check which number is greater for division. I couldn't figure out typecasting with the structure I made for the program. This statement helps 
	with accuracy*/
	if(a > b)                             
    	{ 
	//If the first number is greater.
        return a / b;                        
	} else { 
	//If second number is greater.
       	return b/ a;  
	}

	/*If b is zero, it causes divide by zero mathematical error this accounts for it*/
	if (b == 0) {
	return NO_RESULT;
	}
}

// Function to perform operation between two integers
int getResult(int iNum1, int iNum2, char cOperator) {
switch(cOperator) {
	case '+':
	return add(iNum1, iNum2);
	break;
	case '-':
	return subtract(iNum1, iNum2);
	break;
	case '*':
	return multiply(iNum1, iNum2);
	break;
	case '/':
	return divide(iNum1, iNum2);
	break;
	default:
	//I have an if...else statement in the main function, no need for another printf function
	break;
	}
//Return NO_RESULT in case the operation could not be performed
	return NO_RESULT;

}

int main() {

	//Intialize and declare variables 
	char cOperator;
	int iNum1, iNum2, result;

	//Title
	printf("\t\tControl Structures Calculator\n");
	//Instructions
	printf("\tEnter positive or negative whole numbers.\n\n");

	printf("Enter an operator (+ , -, *, /): ");
	scanf("%c", &cOperator);
	printf("Enter first operand: ");
	scanf("%d", &iNum1);
	printf("Enter second operand: ");  
	scanf("%d", &iNum2);

	//Result of arithmetic operation
	result = getResult(iNum1, iNum2, cOperator);

	// If there is a valid result
	if (result != NO_RESULT) {
	printf("Result: %d %c %d = %d \n", iNum1, cOperator,iNum2, result);
	} else {
	// If the result is invalid, print message
	printf("Your input is Invalid :) Try Again. ");
	}
  
  	return 0;
}
