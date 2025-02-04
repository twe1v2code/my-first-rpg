#ifndef PLAYER_H 
#define PLAYER_H

// Объявляем структуру
struct player {
    char *name;
    int health;
    int gold;
    int damage;
};

void init_player(int health, int gold, int damage, struct player *player1);

#endif