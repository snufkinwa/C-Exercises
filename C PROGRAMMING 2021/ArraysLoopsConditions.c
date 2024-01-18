//Week 2: (B) C-Program using Arrays, Loops and Conditions
//Created by Janay Harris on 6/5/21

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Define directive allows definition of macros of constant values
#define array_Length 5 //length of array
#define BUFSIZE 20 //length of string 
 
//Calculate the average 
int getMean (int *arr, int length) {
	int sum = 0;
	for (int i=0; i < length; i++){
	sum += arr[i];
}
	return sum/length;
}
 
//Calculate the Maximum 
int getMaximum(int *arr, int length) {
	int max=0;
	for(int i=0; i < length; ++i)
	if (arr[i] > arr[max])
	max = i;
	return arr[max];
  
}
 
int main() {
 
	//Intialize and Declare Variables 
	int values[array_Length] = {0};
	char buf[BUFSIZE];
	int index = 0;
	int x = 0;
 
    	while(x < 5) {
    	//Ask user to input integer 
	printf ("Type a number:");
	x++;
	if (fgets(buf, BUFSIZE, stdin) == NULL)//Reads and Inputs string
	break;
 
	//Save new int in the array 
    	values[index] = atoi(buf);//Converts string into int, if it is not an int it will be 0
 
    	//Move the index to the next element
	index = (index + 1) % array_Length;
 
	//Display the array
	printf("[");
	for (int i= 0; i < array_Length; i++) {
	printf("%d ", values[i]);
	}
    	
	//Display average of its value and maximum number 
 	printf("]\n\tAverage of the Array = %d\n", getMean(values, array_Length));
        printf("\tMaximum Value of the Array = %d\n", getMaximum(values,array_Length));
    
	}
    
}
