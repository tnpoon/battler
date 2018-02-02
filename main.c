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
int money = 100;
int items[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

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
		printf("Your HP: %i Monsters defeated: %i\nDungeonBucks: %d Potions: %d\n", HP, defeated, money, items[0]); // Writes player status
		char test[5][50] = {{"Fight Monsters"}, {"Shop"}, {"Save"}, {"Load"}, {"Exit"}}; // Declares menu items
		int choice = chooser(5, 50, test); // Calls menu function, passes items

		switch (choice){
			case 1: // Fight monsters
				monstermenu();
				break;
			case 2: // Shop
				shopmenu();
				break;
			case 3: // Save
				savemenu();
				break;
			case 4: // Load
				loadmenu();
				break;
			case 5: // Exit
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
