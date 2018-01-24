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

	puts("Welcome to Battler! Who do you want fight today?");
	
	do {
		printf("Your HP: %i Monsters defeated: %i\n", HP, defeated);
		char test[4][50] = {{"Fight Balrog"},{"Fight Trump"},{"FIGHT ME"}, {"Exit"}};
		int choice = chooser(4, 50, test);
	
		switch (choice){
			case 1:
				balrog();
				break;
			case 2: 
				break;
			case 3:
				break;
			case 4: 
				goto QUITGAME;
			case -1:
				printf("Error choose something valid!\n");
				break;
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
