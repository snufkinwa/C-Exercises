//Week 3: Strings, Loops, Arrays combined
//Created by Janay Harris on 6/12/2021

#include <stdio.h>
#include <stdlib.h>


void options()
{
	puts("\t\t\tMain Menu");
	puts("\t\ta. Enter New Integer Value");
	puts("\t\tb. Print Pointer Address");
	puts("\t\tc. Print Integer Address");
	puts("\t\td. Print Integer Value");
	puts("\t\te. Exit");
	puts(" \tPlease enter an option from the menu: "); 
}//end options
	

int main(void) {
	//Intialize and Declare variables
	char menuOption;
	char valueStr [50];
	int i; 
	int *iPtr= NULL;

	while(menuOption != 'e')
	{
	//Four Menu Options
	options();
	menuOption = getc(stdin);
	getc(stdin);
	

 	switch(menuOption){

	case 'a':
	//Enter New Integer Value 
	printf("Enter an Integer: ");
	gets(valueStr);
	i = atoi(valueStr);
        break;
	case 'b':
      	//Print Pointer Address
	iPtr = &i;
	printf("Address of Pointer is %p\n", (void *) iPtr);
        break;
	case'c':
	//Print Integer Address 
	printf("Address of integer is %p\n", (void *) &i);
        break;
	case'd':
	//Print Integer Value 
	printf("The integer value is %d\n", i);
	break;
	case'e':
        break;
	default:
	printf("Invalid Option, try again\n");
	break;
	}//end Switch Statement
	}//end while statement
	return 0;

}
