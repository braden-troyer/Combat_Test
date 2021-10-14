#include <stdio.h>
#include <stdlib.h>
#include "entity.h"
#include "funcs.h"



int main()
{
	Entity *player = newPlayer();
	int ent_num = 2;
	Entity *e_list = newSlime(ent_num);

	Entity *tmp;
	int tmp_num;
	
	int enemy_hp;
	
	int choice;

	bool combatIsOver = false;

	while (!combatIsOver)
	{

		printf("Current HPs are:\n\tPlayer: %d\n", player->hp);

		for (int i = 0; i < ent_num; i++)
			printf("\t%s: %d\n", (e_list + i)->name, (e_list + i)->hp);

		printf("\n");


		// Player choose
		printf("Your HP: %d\n\n\tWho do want to attack?\n", player->hp);
		
		for (int i = 0; i < ent_num; i++)
			printf("\t %d. %s\n", i + 1, (e_list + i)->name);
		printf("Enter a number here: ");
		scanf("%d", &choice);

		while (choice < 0 || choice > ent_num)
		{
			printf("Invalid choice, please try again: ");
			scanf("%d", &choice);
		}
		attack((e_list + choice - 1), player);


		// Enemy Choose
		for (int i = 0; i < ent_num; i++)
			if ((e_list + i)->isAlive)
				attack(player, (e_list + i));


		// Damage
		enemy_hp = 0;
		for (int i = 0; i < ent_num; i++)
			enemy_hp += (e_list + i)->hp;


		// Update the enemy list
		tmp_num = 0;
		tmp = malloc(sizeof(Entity) * ent_num);
		for (int i = 0; i < ent_num; i++)
			if ((e_list + i)->isAlive)
			{
				*(tmp + tmp_num) = *(e_list + i);
				tmp_num++;
			}
		ent_num = tmp_num;
		free(e_list);
		e_list = malloc(sizeof(Entity) * tmp_num);
		for (int i = 0; i < tmp_num; i++)
			*(e_list + i) = *(tmp + i);

		free(tmp);

		
		// IsOver update
		if (player->hp == 0 || enemy_hp == 0)
		{
			printf("Combat has ended\n");
			combatIsOver = true;
		}
		
	}

	free(player);
	free(e_list);
	

	return 0;
}
