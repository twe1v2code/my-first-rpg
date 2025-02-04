#ifndef ENEMY_H
#define ENEMY_H

typedef enum {
    ENEMY_GOBLIN,
    ENEMY_ORC,
    ENEMY_DRAGON,
    ENEMY_COUNT
} EnemyType;

typedef struct {
    int health;
    int damage;
    int gold_reward;
} EnemyStats;

typedef struct {
    EnemyType type;
    char *name;
    int health;
    int damage;
} Enemy;

extern const EnemyStats enemy_stats[ENEMY_COUNT];

Enemy create_enemy(EnemyType type, char *name);

#endif