#include <stdio.h>
#include <stdlib.h>
#include "entity.h"

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
	}

	return tmp;
}

void attack(Entity *receiver, Entity *attacker)
{
	if (attacker->attack >= receiver->hp) {
		receiver->hp = 0;
		receiver->isAlive = false;
	}
	else
		receiver->hp -= attacker->attack;
}

void copyEntity(Entity *receiver, Entity *origin, int size)
{
	for (int i = 0; i < size; i++, receiver++, origin++)
	{
		*receiver = *origin;
	}
}

int main()
{
	Entity *player = newPlayer();
	int ent_num = 2;
	Entity *e_list = newSlime(ent_num);

	Entity *tmp = malloc(2 * sizeof(Entity));
	
	Board main_board = malloc(sizeof(Board));
	main_board->friendly_list = player

	main_board->enemy_list = e_list;
	main_board->ent_num = &ent_num;	
	
	int choice;

	for (int i = 0; i < ent_num; i++)
	{
		main_board->enemy_hp += (e_list + i);
	}

	printf("Starting HPs are:\n\tPlayer: %d\n\tE1: %d\n\tE2: %d\n", player->hp, e_list[0].hp, e_list[1].hp);
	printf("Starting Attacks are:\n\tPlayer: %d\n\tE1: %d\n\tE2: %d\n", player->attack, e_list[0].attack, e_list[1].attack);

	bool combatIsOver = false;

	while (!combatIsOver)
	{
		/*
		(tmp + 1)->hp = 3;
		copyEntity(tmp, e_list, ent_num);	

		attack(e_list, player);
		 
		printf("Current HPs are:\n\tPlayer: %d\n\tE1: %d\n\tE2: %d\n", player->hp, e_list[0].hp, e_list[1].hp);
	
		printf("Prev HPs are:\n\tPlayer: %d\n\tE1: %d\n\tE2: %d\n", player->hp, tmp[0].hp, tmp[1].hp);

		combatIsOver = true;
		*/

		// Player choose
		printf("Your HP: %d\n\n\tWho do want to attack?\n\t 1. Slime\n\t 2. Slime\nEnter a number here: ", player->hp);
		scanf("%d", &choice);
			
		// Enemy Choose
		
		// Damage
		
		// IsOver update
		if (player->hp == 0 || main_board->enemy_hp == 0)
		{
			printf("Combat has ended\n");
			combatIsOver = true;
		}
		
	}

	free(player);
	free(e_list);
	free(tmp);
	// free(main_board);
	

	return 0;
}
