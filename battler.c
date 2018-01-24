//Battler by Tin Nok Poon
//Simple game where you battle a monster

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int HP = 100;
int defeated = 0;
bool isDead = false;

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
	HP -= 20;
	defeated++;
}

int main()
{
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
