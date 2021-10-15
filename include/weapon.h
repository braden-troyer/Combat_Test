#ifndef WEAPON_H_
#define WEAPON_H_

#include <stdlib.h>
#include <string.h>

typedef struct {
    char *name;
    int attack;
} Weapon;


int i = 0;


Weapon *newShortsword()
{
    Weapon *tmp = malloc(sizeof(Weapon));

    tmp->name = malloc(sizeof(char) * 20);
    strcpy(tmp->name, "Shortsword");
    tmp->attack = 5;

    return tmp;
}

#endif