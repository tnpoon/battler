//Battler by Tin Nok Poon
//Simple game where you battle a monster

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "functions.h"

int HP = 100;
int defeated = 0;

int main()
{
	bool isDead = false;
	char welcomeMsg[] = 
"========================================\n\
	Welcome to Battler!\n\
	  Coded By: tnpoon\n\
      To play: Choose an option!\n\
========================================";
	clear();
	puts(welcomeMsg);
	
	do {
		printf("Your HP: %i Monsters defeated: %i\n", HP, defeated);
	//	char test[4][50] = {{"Fight Balrog"},{"Fight Trump"},{"FIGHT ME"}, {"Exit"}};	
		char test[4][50] = {{"Fight Monsters"}, {"Save"}, {"Load"}, {"Exit"}};
		int choice = chooser(4, 50, test);
		switch (choice){
			case 1:
				monstermenu();
				break;
			case 2:
				save();
				break;
			case 3:
				load();
				break;
			case 4: 
				goto QUITGAME;
			default:
				break;
		}

		if (HP <= 0)
		{
			isDead = true;
		}
	} while (!isDead);
	
	printf("Game Over!\n");

	QUITGAME:
	printf("Thank you for playing!\n");
	exit(0);
}
