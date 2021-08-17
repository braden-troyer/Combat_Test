/*
Goal: Make a simple combat system

How to achieve: 
   Using only stdin and stdout the game
   should define a character, define their traits, and
   give the player access to the character.

   The player then must "Fight" some monster
*/


// Standard Library Includes
#include <stdio.h>
#include <stdlib.h>

// Brings in (typedef'd) structs of Items, Entities, and the Combat Arena
#include "structs.h"




// General Functions
void clearScreen();
void mainLoop();
void turnExec();

// Arena Member Functions
Arena populateArena(Entity *list);

// Entity Functions
void setStats(Entity *entity);


int main(int argc, char* argv[])
{
    printf("Hello World!\n");
    return 0;
}

void clearScreen()
{
    system("clear");
}


void setStats(Entity *entity) 
{
    
}