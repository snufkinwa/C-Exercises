//Week 5 Hands on Exercise 1
//Created by Janay Harris on 6/26/2021

#include<stdio.h>

//Macro to calculate the circle's area
#define PI 3.14159265359
#define CIRCLEAREA(r) (PI*r*r)

int main(){

	//Initialize and Declare variables
	float area, radius;

	//Prompt user to enter circle radius
	repeatme:
	printf("Enter the radius of the circle: \t" );
	scanf("%f", &radius);

	//Display result to user
	if(radius>0){
	area = CIRCLEAREA(radius);
	printf("Area of the circle is:\t %.2f", area);
	} else {
	printf("Please enter valid value of radius and try again\n\n");
	goto repeatme;
	}//end if

	return 0;
}//end main