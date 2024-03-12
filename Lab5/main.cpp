#include<iostream>
#include "RPG.h"
using namespace std;

int main()
{
    //Create RPG that uses the default constructor
    RPG npc;

    //Create RPG that uses the overloaded constructor
    RPG player("Player", 100, 20, 15, "warrior");

    // Test isAlive function
    cout << "Is player alive? " << (player.isAlive() ? "Yes" : "No") << endl;

    // Test updateHealth function
    int newHealth = 75;
    player.updateHealth(newHealth);
    cout << "Updated player health: " << player.getHealth() << endl;
    cout << "Is player alive now? " << (player.isAlive() ? "Yes" : "No") << endl;

    
    return 0;
}