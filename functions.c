#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "functions.h"

int chooser(int n, int m, char choices [][m])
{
	while (true) {
		puts("Make a choice:");

		for(int i = 0; i < n; i++)
		{
			printf("%d: ", i+1);
			for (int j = 0; j < m; j++)
			{
				printf("%c", choices[i][j]);
			}
			printf("\n");
		}
		
		long selection;
		char buffer[10];
		char *endptr;

		fgets(buffer, 10, stdin);
		selection = strtol(buffer, &endptr, 0);
		
		printf("\n");
		
		if(selection > n || selection < 1){
			puts("ERROR! Please make a valid choice!");
			puts("Press ENTER to continue...");
			fgets(buffer, 10, stdin);
			clear();
		} else {
			clear();
			return (int) selection;
		}

	}
}

void balrog(){
//	printf("You die!\n");
	int mobHP = 30;
	int mobAtk = 10;
	int defFreq = 2;
	char mobName[] = "Balrog";
	int bStatus = 0;

	bStatus = battle(mobName, mobHP, mobAtk, defFreq);
	
	if (bStatus == 0)
	{
		printf("You have defeated %s!\n", mobName);
		defeated++;
	}
	puts("");
}

int battle(char mobName[], int mobHP, int mobAtk, int defFreq)
{
	char choices[4][50] = {{"Attack"}, {"Defend"}, {"Inspect"}, {"Run"}};
	bool inspected = false;
	bool mobIsAlive = true;
	int action;
	
	do {
		printf("You are fighting with %s! What do you do?\n", mobName);
		printf("Your HP: %d\n", HP);
		action = chooser(4, 50, choices);
		
		switch (action){
			case 1:
				printf("You attack %s! Dealing 10 damage!\n", mobName);
				mobHP -= 10;
				break;
			case 2:
				break;
			case 3:
				printf("You inspect %s, revealing its status!\n", mobName);
				printf("HP: %i Attack: %i Defence %i\n", mobHP, mobAtk, defFreq);
				break;
			case 4:
				return -1;
				break;
			default:
				break;
		}
		puts("");
	} while ( mobHP > 0 & HP > 0);
	
	if (mobHP <= 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

void monstermenu()
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
			break;
		case 4:
			break;
		default:
			break;
	}
	
}

void clear()
{
	char str [5] = {27, '[', '2', 'J', 0};
	for (int i=0; i < 80; i++){
		puts("");
	}
	puts(str);
}

void save()
{
	puts("Sorry! Not implemented yet!");
}

void load()
{
	puts("Sorry! Not implemented yet!");
}
