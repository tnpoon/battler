#include <stdio.h>
#include "common.h"

void monstermenu(void)
{
	int action;
	char choices[4][50] = {{"Fight Balrog"},{"Fight Trump"},{"FIGHT ME"}, {"Back"}};
	action = chooser(4, 50, choices);

	switch (action){
		case 1:
			balrog();
			break;
		case 2:
			break;
		case 3:
			HP = 0;
			break;
		case 4:
			break;
		default:
			break;
	}
	
}

void shopmenu(void)
{
	int action;
	int temp;
	char choices[2][50] = { {"Buy potion ($5)"}, {"Exit"} };

	printf("You have %d DungeonBucks.\n", money);

	action = chooser(2, 50, choices);

	switch (action) {
		case 1:
			temp = buy(5,0);
			if (temp == 0 ) {
				puts("You bought a potion for 5 DungeonBucks!\n");
			} else {
				puts("You don't have enough money to buy potion!\n");
			}
			break;
		case 2:
			break;
		default:
			break;
	}
}

void savemenu(void)
{
	puts("Sorry! Not implemented yet!");
}

void loadmenu(void)
{
	puts("Sorry! Not implemented yet!");
}
