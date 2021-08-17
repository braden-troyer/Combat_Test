#include <stdbool.h>
// A definition of an Item generalized
typedef struct Item
{
    char *name;
    int hp_mod;
    int attack_mod;
    int defense_mod;
    bool is_weapon;
} Item;

// A definition of Entities, alive or nonliving
typedef struct Entity
{
    int base_hp, hp;
    int base_attack, attack;
    int base_defense, attack;

    Item *inventory;
    Item helmet;
    Item chestplate;
    Item leggings;
    Item ring;
    Item main_weapon;
    Item *list;
} Entity;

typedef struct Entity_Nonliving
{
    int hp;
} Entity_N;


// Defines the 
typedef struct Arena
{
    Entity *entity_list;
} Arena;