#include<iostream>
#include "RPG.h"
using namespace std;

int main()
{
    //Create RPG that uses the default constructor
    RPG p2;

    //Create RPG that uses the overloaded constructor
    RPG p1("Wiz", 70, 45, 15, "mage");

    // Test isAlive function
    cout << "Is p1 alive? " << (p1.isAlive() ? "Yes" : "No") << endl;

    // Test updateHealth function
    int newHealth = 75;
    p1.updateHealth(newHealth);
    cout << "Updated p1 health: " << p1.getHealth() << endl;
    cout << "Is p1 alive now? " << (p1.isAlive() ? "Yes" : "No") << endl;

    // Create variables for players
    RPG p1 = RPG("Wiz", 70, 45, 15, "mage");
    RPG p2 = RPG();
    // implement gameLoop(), displayEnd(), and displayStats()
    gameLoop(&p1, &p2);
    displayEnd(p1, p2);
    return 0;
}

/**
 * @brief Prints out both player's name and their health.
 * Example Output for names Wiz and NPC
 * 
 * @param player1
 * @param player2
 */
void displayStats(RPG p1, RPG p2) {
    //Implement the brief
    // Output player 1 health
    printf("Wiz health: ", p1.getHealth());
    // Output player 2 health
    printf("NPC health: ", p2.getHealth());
}

/**
 * @brief Displays who wins based on who is alive. Use an if statement to check whether
 * player 1 is alive. If so, print that they won, else player 2 won.
 * 
 * Example output:
 * Wiz defeated NPC! Good game!\n
 * 
 * @param player 1
 * @param player 2
 */
void displayEnd(RPG p1, RPG p2) {
    //Implement brief
    if (p1.isAlive()) {
        printf("Wiz defeated NPC! Good game!\n");
    } else {
        printf("Player 2 wins! Good game!\n");
    }
}
/***
* @brief uses a while loop to check whether both players are alive.
* If so, it calls displayStats((*player1), (*player2))
* Inside the while loop it:
* Then prints the name of player one to say that it is their turn
* Then call (*player1).useSkill(player2)
Then prints "---------------------------------------\n"
Repeat the process for player 2 acting on player 1 inside the same while loop
* Then prints the name of player two to say that it is their turn
Then call (*player2).useSkill(player1)
* Then prints
-\n"
Refer to the Role Playing Game Part Two instructions for the
example outut
* @param player1
* @param player2
*/
void gameLoop(RPG * player1, RPG * player2){
//Implement brief
}