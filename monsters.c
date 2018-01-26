#include <stdio.h>
#include "structures.h"
#include "common.h"

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
