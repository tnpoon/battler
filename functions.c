#include <stdio.h>
#include <stdbool.h>
#include "functions.h"

int chooser(int n, int m, char choices [][m])
{
	puts("Make a choice:");

	for(int i = 0; i < n; i++)
	{
		printf("%i: ", i+1);
		for (int j = 0; j < m; j++)
		{
			printf("%c", choices[i][j]);
		}
		printf("\n");
	}
	
	int selection;
	scanf("%i", &selection);

	if(selection > n || selection < 1){
		return -1;
	} else {
		return selection;
	}
}

void balrog(){
//	printf("You die!\n");
	int mobHP = 30;
	int mobAtk = 10;
	int defFreq = 2;
	char mobName[] = "Balrog";
	
	battle(mobName, mobHP, mobAtk, defFreq);
	HP -= 20;
	defeated++;
}

void battle(char mobName[], int mobHP, int mobAtk, int defFreq)
{
	char choices[4][50] = {{"Attack"}, {"Defend"}, {"Inspect"}, {"Run"}};
	bool inspected = false;
	bool mobIsAlive = true;
	int action;
	
//	do {
	printf("You are fighting with %s! What do you do?\n", mobName);
	chooser(4, 50, choices); 
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
			puts("ERROR! Choose something valid!");
			break;
	}

}

