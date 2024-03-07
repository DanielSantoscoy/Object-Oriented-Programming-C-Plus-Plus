#include<iostream>
#include "RPG.h"
using namespace std;

RPG::RPG()
{
    //Assign private variables
   string name = "NPC";
   int health = 100;
   int strength = 10;
   int defense = 10;
   string type = "warrior";
   string skills[0] = "slash";
   string skills[1] = "parry";
};

RPG::RPG(string name, int health, int strength, int defense, string type){
    //Call functions from RPG.h
    setSkills();
    getName();
    getHealth();
    getStrength();
    getDefense();
};

/**
 * @brief sets the skills based on RPG's role
 * 
 */
void RPG::setSkills() {
    if (type == "mage"){
        skills[0] = "fire";
        skills[1] = "thunder";
    } else if (type == "thief"){
        skills[0] = "pilfer";
        skills[1] = "jab";
    } else if (type == "archer"){
        skills[0] = "parry";
        skills[1] = "crossbow_attack";
    } else {
        skills[0] = "slash";
        skills[1] = "parry";
    }
};

void RPG::printAction(string skill, RPG opponent) {
    printf("%s used %s on %s\n", name.c_str(), opponent.getName().c_str());
}

//Implement updateHealth()

/**

* @brief updates health into new_health
*
* @param new_health
*/

void RPG::updateHealth(int new_health){
    health = new_health;
}

//Implement isAlive()

/**
* @brief returns whether health is greater than 0
*
* @return true
* @return false
*/

const bool RPG::isAlive(){
    return health > 0;
}