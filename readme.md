# My first RPG

## Description
A text-based game written in C where the player fights different types of enemies. Each enemy has unique stats, such as health, damage, and gold rewards.

## Project Structure

- `src/` - Source code for the game.
  - `main.c` - Main game logic.
  - `enemy.c` - Logic for creating and managing enemies.
  - `player.c` - Logic for creating and managing the player.
- `include/` - Header files.
  - `enemy.h` - Header file for enemy structures and functions.
  - `player.h` - Header file for player structures and functions.
- `Makefile` - Build automation file.

## Building the Game

1. Clone the repository:

   ```bash
   git clone https://github.com/twe1v2code/my-first-rpg.git
   cd my-first-rpg
   ```

2. Build the game using `Makefile`:

   ```bash
   make
   ```

3. Run the game:

   ```bash
   ./bin/game
   ```

## Status
The game is currently in development.

## License
This project is licensed under the MIT License.

---

This `README.md` is short and to the point, giving basic information about the game, its structure, and how to build and run it.