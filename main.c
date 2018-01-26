//Battler by Tin Nok Poon
//Simple game where you battle a monster

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "common.h"

//Define global variables
int HP = 100;
int defeated = 0;

int main()
{
	//Define variables
	char welcomeMsg[] = 
"========================================\n\
	Welcome to Battler!\n\
	  Coded By: tnpoon\n\
      To play: Choose an option!\n\
========================================";

	clear(); // Clear screen
	puts(welcomeMsg); //Write welcome message
	
	do {
		printf("Your HP: %i Monsters defeated: %i\n", HP, defeated); // Writes player status
		char test[4][50] = {{"Fight Monsters"}, {"Save"}, {"Load"}, {"Exit"}}; // Declares menu items
		int choice = chooser(4, 50, test); // Calls menu function, passes items

		switch (choice){
			case 1: // Fight monsters
				monstermenu();
				break;
			case 2: // Save
				save();
				break;
			case 3: // Load
				load();
				break;
			case 4: // Exit
				goto QUITGAME;
			default:
				break;
		}

	} while (HP > 0);
	
	printf("Game Over!\n");

	QUITGAME:
	printf("Thank you for playing!\n");
	exit(0);
}
