#ifndef FUNCTIONS_H
#define FUNCTIONS_H

int chooser(int n, int m, char choices [][m]);

void balrog(void);

int battle(char mobName[], int mobHP, int mobAtk, int defFreq);

void monstermenu (void);

void save(void);

void load(void);
void clear(void);
extern int HP;
extern int defeated;
#endif
