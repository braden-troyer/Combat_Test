#ifndef FUNCS_H_
#define FUNCS_H_

#include "entity.h"

void attack(Entity *receiver, Entity *attacker);

void copyEntity(Entity *receiver, Entity *origin, int size);

#endif