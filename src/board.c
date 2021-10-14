#include "board.h"
#include <stdlib.h>

Board *newBoard() {
	Board *tmp = malloc(sizeof(Board));
	tmp->e_list = NULL;
	tmp->player = NULL;
	return tmp;
}
