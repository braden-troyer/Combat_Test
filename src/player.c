#include "player.h"
#include <stdlib.h>

Player *newPlayer() {
	Player *tmp = malloc(sizeof(Player));
	tmp->hp = NULL;
	tmp->attack = NULL;
	return tmp;
}
