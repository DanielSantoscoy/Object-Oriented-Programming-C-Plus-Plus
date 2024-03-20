#include<iostream>
#include "RPG.h"
using namespace std;

// Declare gameLoop() and displayEnd() functions
void gameLoop(RPG * p1, RPG * p2);
void displayEnd(RPG p1, RPG p2);

/**
 * @brief Prints out both player's name and their health.
 * Example Output for names Wiz and NPC
 * 
 * @param p1
 * @param p2
 */
void displayStats(RPG p1, RPG p2) {

    //Implement the brief

    // Output player 1 health

    printf("Wiz health: %d ", p1.getHealth());

    // Output player 2 health

    printf("  NPC health: %d\n ", p2.getHealth());
}

/**
 * @brief Displays who wins based on who is alive. Use an if statement to check whether
 * player 1 is alive. If so, print that they won, else player 2 won.
 * 
 * Example output:
 * Wiz defeated NPC! Good game!\n
 * 
 * @param p1
 * @param p2
 */
void displayEnd(RPG p1, RPG p2) {

    //Implement brief

    if (p1.isAlive()) {
        printf("Wiz defeated NPC! Good game!\n");
    } else {
        printf("NPC wins! Good game!\n");
    }
}

/***
* @brief uses a while loop to check whether both players are alive.
* If so, it calls displayStats((*player1), (*player2))
* Inside the while loop it:
* Then prints the name of player one to say that it is their turn
* Then call (*player1).useSkill(player2)
* Then prints "---------------------------------------\n"
*
* Repeat the process for player 2 acting on player 1 inside the same while loop
* Then prints the name of player two to say that it is their turn
* Then call (*player2).useSkill(player1)
* Then prints "---------------------------------------\n"
*
Refer to the Role Playing Game Part Two instructions for the
example output
*
* @param p1
* @param p2
*/
void gameLoop(RPG * p1, RPG * p2) {

//Implement brief

// Create while loop to see if both players are alive

    while (p1->isAlive() && p2->isAlive()) {
        // Display stats
        displayStats(*p1,*p2);

        // Prints the name of player one to say that it is their turn
        printf("Wiz's turn\n\n");
        // Call (*p1).useSkill(p2)
        (*p1).useSkill(p2);

        // Print "---------------------------------------\n"
        printf("---------------------------------------\n");

        // Display stats after attack
        displayStats(*p1,*p2);

        // Check if p2 is alive before proceeding, using isAlive() function
        if (p2->isAlive()) {       
            // If p2 is alive, output that it is their turn
            printf("NPC's turn\n\n");
            // call (*p2).useSkill(p1)
            (*p2).useSkill(p1);
            // Print "---------------------------------------\n"
            printf("---------------------------------------\n");
        }
    }

}

int main() {
    //Create RPG that uses the overloaded constructor

    RPG p1 = RPG("Wiz", 70, 45, 15, "mage");
    
    //Create RPG that uses the default constructor   

    RPG p2 = RPG();

    // cout << "Wiz health: " << p1.getHealth() << "  NPC health: " << p2.getHealth() << endl;
    // cout << "Wiz's turn " << endl;

    // implement gameLoop(), displayEnd(), and displayStats()
    gameLoop(&p1, &p2);
    displayEnd(p1, p2);

    return 0;
}



