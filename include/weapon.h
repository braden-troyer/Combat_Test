#ifndef WEAPON_H_
#define WEAPON_H_

#include <stdlib.h>
#include <string.h>

typedef struct {
    char *name;
    int attack;
} Weapon;

Weapon *newShortsword();

#endif