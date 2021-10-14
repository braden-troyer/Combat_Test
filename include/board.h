#ifndef BOARD_H_
#define BOARD_H_

#include "entity.h"


typedef struct Board {
	int *ent_num;
	int friendly_hp;
	Entity *friendly_list;
	
	int enemy_hp;
	Entity *enemy_list;
} Board;

Board *newBoard();

#endif
