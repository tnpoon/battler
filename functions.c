#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "functions.h"
#include "structures.h"

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

void balrog(void)
{
	Monster monster = {
	.hp = 30,
	.atk = 10,
	.freq = 2,
	.name = "Balrog",
	.desc = "",
	.def = 5};

	int bStatus = battle(monster);
	
	if (bStatus == 1){
		printf("You have defeated %s!\n", monster.name);
		defeated++;
	}

	puts("");
}

int battle(Monster monster)
{
	char choices[4][50] = {{"Attack"}, {"Defend"}, {"Inspect"}, {"Run"}};
	bool pDefend = false;
	int defCounter = 0;
	int damage;
	int action;

	do {
		printf("You are fighting with %s! What do you do?\n", monster.name);
		printf("Your HP: %d\n", HP);	
	
		//Set defence status
		if (defCounter < monster.freq) {
			damage = 10 - monster.def;
			defCounter++;	
		} else {
			damage = floor((10 - monster.def) / 2);
			defCounter = 0;
		}

		//Player Action	
		action = chooser(4, 50, choices);
		switch (action){
			case 1: //
				printf("You attack %s! Dealing %d damage!\n", monster.name, damage);
				monster.hp -= damage;
				break;
			case 2:
				printf("You defend yourself against %s!\n", monster.name);
				pDefend = true;
				break;
			case 3:
				printf("You inspect %s, revealing its status!\n", monster.name);
				printf("HP: %i Attack: %i Defence %i\n", monster.hp, monster.atk, monster.def);
				break;
			case 4:
				return -1;
				break;
			default:
				break;
		}

		//Monster Action
		if (defCounter != 0) {
			if (!pDefend) {
				printf("%s hits you with %d damage!\n", monster.name, monster.atk);
				HP -= monster.atk;
			} else if (pDefend) {
				printf("%s hits you, but because you defended, it deals only %d damage!\n",
				monster.name, monster.atk /2);
				HP -= monster.atk / 2;
				pDefend = false;
			}
		} else {	
			printf("%s defends itself! Halving your damage!\n", monster.name);
		}

		puts("");
	} while ( monster.hp > 0 & HP > 0);
	
	// Return 1 if monster is dead, return 0 if it survives (aka. you run)
	if (monster.hp <= 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

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

void clear(void)
{
	char str [5] = {27, '[', '2', 'J', 0};
	for (int i=0; i < 80; i++){
		puts("");
	}
	puts(str);
}

void save(void)
{
	puts("Sorry! Not implemented yet!");
}

void load(void)
{
	puts("Sorry! Not implemented yet!");
}
