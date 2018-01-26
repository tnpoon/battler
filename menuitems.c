#include <stdio.h>
#include "functions.h"

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

void save(void)
{
	puts("Sorry! Not implemented yet!");
}

void load(void)
{
	puts("Sorry! Not implemented yet!");
}
