//Week 5: PIN Verification program: loops/arrays/decisions
//Created by Janay Harris on 6/26/2021

#include <stdio.h>
#include <string.h>

//Create a structure called car 
struct car{
	char make[50];
	char model[20];
	int year;
	int miles;
};

int main(){

	//Create an instance of car structure
	struct car carOne;

	//Assign values to the members 
	strcpy(carOne.make, "Honda");
	strcpy(carOne.model, "Civic");
	carOne.year = 2015;
	carOne.miles= 66000;

	//Print member contents 
	printf("Car make: %s\n", carOne.make);
	printf("Car model: %s\n", carOne.model);
	printf("Car year: %d\n", carOne.year);
	printf("Car Miles: %d\n", carOne.miles);
	
	return 0; 
}//end main 
