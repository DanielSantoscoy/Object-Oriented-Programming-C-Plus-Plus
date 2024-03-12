#include<iostream>
#include "RPG.h"
using namespace std;

RPG::RPG()
{
    //Assign private variables
    name = "NPC";
    health = 100;
    strength = 10;
    defense = 10;
    type = "warrior";
    skills[0] = "slash";
    skills[1] = "parry";
};

RPG::RPG(string name, int health, int strength, int defense, string type){
   // Assign private variables with parameter values
    this->name = name;
    this->health = health;
    this->strength = strength;
    this->defense = defense;
    this->type = type;
    // Call setSkills() to initialize skills based on type
    setSkills();
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
    printf("%s used %s on %s\n", name.c_str(), skill.c_str(), opponent.getName().c_str());
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

 bool RPG::isAlive() const {
    return health > 0;
}

const string RPG::getName() {
    return name;
}

const int RPG::getHealth() {
return health;
}

const int RPG::getStrength() {
    return strength;
}

const int RPG::getDefense() {
    return defense;
}

const string RPG::getType() {
    return type;
}