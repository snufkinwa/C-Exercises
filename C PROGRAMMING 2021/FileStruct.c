//Week 4: Hands-on File Processing and Use of Structures 
//Created by Janay Harris on 6/19/2021

#include <stdio.h>
#include <stdlib.h>

#define MAXT 100
#define FILENAM "monsters.dat"


//Define new datatype
typedef struct createMonster{
	char monsterType[MAXT];
	char specialAbility [MAXT];
	char weakness [MAXT];
}new_Mons;

//Function prototype
void load_menu(void);
void createMonster();
void displayMonster();

int main()
{

//Menu with Options
	load_menu();
	return 0;

}//end main

void load_menu(void)
{
	int choice;

	do
	{
		printf("\n\n\t\tMain Menu\n\n");
		printf("\t1. Create New Monster\n");
		printf("\t2. Display Monster Information\n");
		printf("\t3. Exit\n");
		printf("\tEnter choice: ");
		scanf("\t%d",&choice);

		switch(choice)
		{
			case 1: createMonster();
				break;
			case 2: displayMonster();
				break;
			case 3:
				printf("\n\tWatch Out Your Monster is in Your Closet!\n");
				exit(0);
			default: printf("\nInvalid choice!\n");
				break;
		}

	} while (choice != 3);

}

void createMonster()
{
	//FILE pointers to store
	FILE *pWrite = fopen(FILENAM, "w"); // write only
	new_Mons Monster;

	// test for files not existing.
	if (pWrite == NULL) {
      printf("Error! Could not open file\n");
      exit(1);
    }

	//Enter information about monsters(monster type, special ability, weakness)
	printf("\nWhat type of Monster are you creating: ");
	getchar();
	fgets(Monster.monsterType, sizeof(Monster.monsterType), stdin);//get input from user
	fprintf(pWrite, "Monster Type: %s", Monster.monsterType);//write to file

	printf("List two special abilities your monster has: \n");
	fgets(Monster.specialAbility, sizeof(Monster.specialAbility), stdin);//get input from user
	fprintf(pWrite, "First Ability: %s", Monster.specialAbility);//write to file
	fgets(Monster.specialAbility, sizeof(Monster.specialAbility), stdin);//get input from user
	fprintf(pWrite, "Second Ability: %s", Monster.specialAbility);//write to file

	printf("List two weaknesses your monster has: \n");
	fgets(Monster.weakness, sizeof(Monster.weakness), stdin);//get input from user
	fprintf(pWrite, "First Weakness: %s", Monster.weakness);//write to file
	fgets(Monster.weakness, sizeof(Monster.weakness), stdin);//get input from user
	fprintf(pWrite, "Second Weakness: %s", Monster.weakness);//write to file

	printf("\nYour Monster is awesome!\n\n");

	fclose(pWrite);
}//end createMonster

void displayMonster()
{
	//FILE pointers to print information entered
	new_Mons Monster;
	FILE *pRead;

	//open file
	pRead = fopen(FILENAM, "r");

	if (pRead == NULL){
		printf("\n\tError opening file for read!\n\n");
	} else {
	    printf("\nHere are the monsters occupying space under the bed:\n");
		fscanf (pRead, "%s", Monster.monsterType);
        while ( !feof(pRead)){
                printf("%s\t", Monster.monsterType);
                fscanf (pRead, "%s", Monster.monsterType);
        }
	}//end if
}//end displayMonster
