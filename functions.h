#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "structures.h"

int chooser(int n, int m, char choices [][m]);

void balrog(void);

int battle(Monster monster);

void monstermenu (void);

void save(void);

void load(void);
void clear(void);
extern int HP;
extern int defeated;
#endif
