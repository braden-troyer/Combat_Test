#include "entity.h"
#include <stdlib.h>
#include <string.h>

Entity *newPlayer()
{
	Entity *tmp = malloc(sizeof(Entity));
	tmp->hp = 10;
	tmp->attack = 3;
	tmp->isPlayer = true;
	tmp->isAlive = true;	
	return tmp;
}

Entity *newSlime(int num)
{
	Entity *tmp = malloc(num * sizeof(Entity));
	
	for (int i = 0; i < num; i++)	
	{
		(tmp + i)->hp = 5;
		(tmp + i)->attack = 1;
		(tmp + i)->isPlayer = false;
		(tmp + i)->isAlive = true;
		(tmp + i)->name = malloc(sizeof(char) * 5);
		strcpy((tmp + i)->name, "Slime");
	}

	return tmp;
}