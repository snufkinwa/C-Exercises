//Week 4 Part 2 (B) File Read and Write 
//Created by Janay Harris on 6/19/2021

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NAME 50
#define PHONE 10
#define MAX 5

// Declare a global structure to pass
// to a function
struct contact{
	char name[NAME];
	char phone[PHONE];
};

//Array of structure
struct contact * friend[MAX]= {0};

//Declaration of the function
void loadMenu(void);
void insertEntry(struct contact *friend);
void displayEntry(struct contact *friend);

int main(){

	loadMenu();
	return 0;
}

void loadMenu(){

    int choice;

        printf("\t\tWelcome to Your PhoneBook \n");
        printf("\t\n 1> Insert new Entry");
        printf("\t 2> Display Entry");
        printf("\t 3> Exit\n");
        printf("\n Enter your choice <1-3>: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                insertEntry(friend);
                break;
            case 2:
                displayEntry(friend);
                break;
            case 3:
                exit(0);
                break;
            default:
                printf("**Invalid Input.**\n");
        }//end switch


} //end loadMenu

void insertEntry(struct contact *friend){
    char choice1;
    FILE *pWrite;
    int i;

    do{
    if(i == 0){
        //opening the phoneBook file
    pWrite = fopen("phoneBook.txt", "w");
    } else {
        pWrite = fopen("phoneBook.txt", "a+");
    }

        // Make sure do not enter more than MAX number of records
        if(i >= MAX){
        printf("Reached maximum number of entries that can be filled\n");
        break;
        }

        while (1){
            printf("Enter friend's Name\n");
            scanf("%s", friend[i].name);
            if(strlen(friend[i].name) == 0){
                printf("Name cannot be empty\n");
            } else {
                break;
            }
        }

        while (1){
            printf("Enter friend's Phone number\n");
            scanf("%s", friend[i].phone);
            if(strlen(friend[i].phone) == 0){
                printf("Phone number cannot be empty\n");
            } else {
                break;
            }
        }

        fprintf(pWrite, "%s\t%s \n", friend[i].name, friend[i].phone);
        i++;

	fclose(pWrite);

        fflush(stdin);

        printf("Do you to insert another entry? Y or N\n");
        scanf("%c", &choice1);
        } while (choice1 == 'y' || choice1 == 'Y');
    	loadMenu();

}// end insertEntry

void displayEntry(struct contact *friend){

   //Print the phone book's valid current entries. Do not display phone book entries that are invalid or NULL (0).
    FILE *pRead;
    int i;
    char reRun;

     do{
    pRead = fopen("phoneBook.txt", "r");
    if (pRead != NULL){
        printf("\nName\t Phone Number\n\n");
        fscanf(pRead, "%s %s", friend[i].name, friend[i].phone);
        while (!feof(pRead)){
        printf("%s\t%s\n", friend[i].name, friend[i].phone);
        fscanf(pRead, "%s%s", friend[i].name, friend[i].phone);
        }

        fclose(pRead);}
    else{
        printf("\n File not opened\n");
    }
      fflush(stdin);

        printf("Press Y to Execute the Program Again \n");
        scanf("%c", &reRun);
        loadMenu();
    	} while (reRun == 'y' || reRun == 'Y');

}//end displayEntry

