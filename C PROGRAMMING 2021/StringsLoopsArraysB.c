//Week 3: (B) Strings, Loops, Arrays combined
//Created by Janay Harris on 6/12/2021

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 6 //The program won't work unless the arr2 is 6, an additional NULL character?


int main() {
	//Initialize and declare variables
	char arr1 [10];
	char arr2 [N];
	int i = 0;
	int x =0;


	for(i=0;i<5;i++)
	{
	//User input five characters into second string array
        char index;
        printf("Type character # %d in first array: ", i+1);
	scanf(" %c",&index);

	//Message must appear if the letter Z is entered 
        if(index=='Z' || index=='z')
        {
            puts("You entered Z!");
        }//end if statement

        arr1[i]=index;
	}//end for loop
 
	arr1[i]='\0';
	printf("\nThe string formed by five characters entered is %s\n\n",arr1);


	for(i=0;i<5;i++)
	{
	//User input five characters into second string array
        char index;
        printf("Type character # %d in second array: ", i+1);
        scanf(" %c",&index);
        arr2[i]=index;
	}//end for loop

	arr2[i]='\0';
	printf("\nThe string formed by five characters entered is %s\n",arr2);

	//Output Length of Resulting Array
	strcat(arr1,arr2);
	printf("\nThe concatenated string is %s",arr1);
	printf("\nThe number of elements in the resulting array is %d",sizeof(arr1));

}//end main loop