#include <stdio.h>
#include "player.h"
#include "enemy.h"

int main(void)
{
    struct player hero;

    Enemy goblin = create_enemy(ENEMY_GOBLIN, "Weak goblin");

    puts("Welcome to RPG story\n");
    printf("Enter your name: ");
    scanf("%s", hero.name);
    init_player(100, 50, 5, &hero);

    printf("Welcome %s\n\n", hero.name);

    printf("You were attacked by %s\nStats: %d HP %d Damage\n", goblin.name ,goblin.health, goblin.damage);
    
    return 0;
}