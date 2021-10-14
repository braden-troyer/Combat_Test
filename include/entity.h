#ifndef ENTITY_H_
#define ENTITY_H_

#include <stdbool.h>

typedef struct Entity {
	int hp;
	int attack;
	bool isPlayer;
	bool isAlive;
	char *name;
} Entity;

Entity *newPlayer();
Entity *newSlime(int num);

#endif
