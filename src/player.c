#include "player.h"

void init_player(int health, int gold, int damage, struct player *player1) {  
    player1->health = health;
    player1->gold = gold;
    player1->damage = damage;
}

