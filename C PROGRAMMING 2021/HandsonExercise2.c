//Week 5 Hands on Exercise 2
//Created by Janay Harris on 6/26/2021

#include <stdio.h>

#define TOTALREV(p,q) (p*q)

int main (){

	//Initialize and Declare variables 
	float price, totalRevenue;
	int quantity; 

	//Prompt user to enter price and quantity 
	repeatme: 
	printf("Enter price: \t");
	scanf("%f", &price);
	printf("Enter quantity: \t");
	scanf("%d", &quantity);

	//Display the results to the user
	if(price > 0 && quantity > 0) {
	totalRevenue = TOTALREV(price, quantity);
	printf("Total Revenue is %.2f", totalRevenue);
	} else {
	printf("Please enter valid value and try again\n\n");
	goto repeatme;
	}//end if 
	
	return 0;

}//end main 