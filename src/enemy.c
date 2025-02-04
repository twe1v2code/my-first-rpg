#include "enemy.h"

const EnemyStats enemy_stats[ENEMY_COUNT] = {
    [ENEMY_GOBLIN] = { 30, 5, 10 },
    [ENEMY_ORC] = { 50, 10, 20 },
    [ENEMY_DRAGON] = { 150, 25, 100 }
};

Enemy create_enemy(EnemyType type, char *name) {
    Enemy e;
    e.type = type;
    e.name = name;
    e.health = enemy_stats[type].health;
    e.damage = enemy_stats[type].damage;
    return e;
}