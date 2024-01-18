//Week 4: File Read and Write
//Created by Janay Harris on 6/19/2021

#include<stdio.h>
#include<stdlib.h>

int main() {

	//Use malloc() to allocate a string no longer than 80
	char *favoriteMovie;
	favoriteMovie = (char *) malloc(80 * sizeof(char));
	
	if (favoriteMovie == NULL) {
	printf("Out of memory!\n");
	return 1;
	}//end if 

	//Prompt user to enter his favorite movie 
	printf("Hi, tell me your favorite movie: ");

	//Read his response with scanf() and assign data to allocated memory
	/*I tried using scanf() but I wanted to type a movie with a space and that function stops storing data after it encounters the first space 
	therefore I used fgets()*/
	fgets(favoriteMovie, 80, stdin);

	//Display the user's favorite movie to standard output
	printf("Your favorite movie is %s", favoriteMovie);
	free(favoriteMovie); //free memory resources 

	return 0;

}//end main 