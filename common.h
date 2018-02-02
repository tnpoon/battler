#ifndef COMMON_H
#define COMMON_H
#include "structures.h"

// main.c
extern int HP;
extern int defeated;
extern int money;
extern int items[10];

// functions.c
int chooser(int n, int m, char choices[][m]);
int battle(Monster monster);
void clear(void);
int buy(int price, int item);

// monsters.c
void balrog(void);

// menuitems.c
void monstermenu(void);
void shopmenu(void);
void savemenu(void);
void loadmenu(void);
#endif
