#include "weapon.h"
#include <stdlib.h>

Weapon *newShortsword()
{
    Weapon *tmp = malloc(sizeof(Weapon));

    tmp->name = malloc(sizeof(char) * 10);
    strcpy(tmp->name, "Shortsword");
    tmp->attack = 5;

    return tmp;
}