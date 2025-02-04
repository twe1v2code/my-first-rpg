#include <stdio.h>
#include "player.h"

int main(void)
{
    struct player hero;

    puts("Welcome to RPG story\n");
    printf("Enter your name: \n\n");

    scanf("%s", hero.name);
    init_player(100, 50, 5, &hero);

    printf("Welcome %s\n", hero.name);
    
    return 0;
}