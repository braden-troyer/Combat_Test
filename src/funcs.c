#include "funcs.h"

void attack(Entity *receiver, Entity *attacker)
{
	if (attacker->attack >= receiver->hp) {
		receiver->hp = 0;
		receiver->isAlive = false;
	}
	else
		receiver->hp -= attacker->attack;
}

void copyEntity(Entity *receiver, Entity *origin, int size) {
	for (int i = 0; i < size; i++, receiver++, origin++)
		*receiver = *origin;
}