#ifndef COMMON_H
#define COMMON_H
#include "structures.h"

int chooser(int n, int m, char choices[][m]);

void balrog(void);

int battle(Monster monster);

void monstermenu(void);

void savemenu(void);

void loadmenu(void);
void clear(void);
extern int HP;
extern int defeated;
#endif
