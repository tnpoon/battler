#ifndef FUNCTIONS_H
#define FUNCTIONS_H

int chooser(int n, int m, char choices [][m]);

void balrog();

int battle(char mobName[], int mobHP, int mobAtk, int defFreq);

void monstermenu();

void save();

void load();
void clear();
extern int HP;
extern int defeated;
#endif
