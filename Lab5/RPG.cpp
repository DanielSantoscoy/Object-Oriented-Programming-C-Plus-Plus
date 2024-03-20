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
    // dont let health go to negatives
    if (health < 0) {
        health = 0;
    }
    
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

/**
 * @brief attack decreases the opponent's health by (strength - opponent's defense)
 * In other words, the opponent's defense should soften the blow from the attack
 * 
 * For example, if opponent's health is 100, opponent's defense is 5, and player's
 * strength is 20, then after the attack, opponent's health should be
 * 85 (i.e. 100 - (20-5)).
 * 
 * First calculate the opponent's health, then use (*opponent).getUpdate(new_health)
 *  to update their health
 * 
 * @param opponent
 */
void RPG::attack(RPG * opponent){
    //Implement brief 
    int damage = strength - opponent->getDefense();

    // if/else statement to prevent damage bug
    if (damage > 0) {
        int newHealth = opponent->getHealth() - damage;
        //Update opponents health
        (*opponent).updateHealth(newHealth);
    } else {
        opponent->getHealth() - 0;
    }

}

/**
 * @brief Prompts the user to choose a skill and calls printAction() and attack()
 * 
 * @param opponent
 */
void RPG::useSkill(RPG * opponent){
    // use a for loop to print out all of the players skill
    // the code within your loop should be:
    // printf("Skill %i: %s\n", i, skills[i].c_str());
    // where i is the index given your for loop
    // Recall that SKILL_SIZE is set to 2 within RPG.h
    // The values of i should be 0 <= i < SKILL_SIZE.
    int i = 0;
    for (i >= 0; i < SKILL_SIZE; i++){
        printf("Skill %i: %s\n", i, skills[i].c_str());
    }
    // Create an int called choosen_skill_index
    int choosen_skill_index;

    // Use a print to output "Choose a skill to use: Enter 0 or 1\n"
    printf("Choose a skill to use: Enter 0 or 1\n");
    // get user input and assign it to choose_skill_index
    // (e.g. cin >> )
    cin >> choosen_skill_index;

    // assigns the choosen_skill into a string called choosen_skill
    // no modification needed here 
    string choosen_skill = skills[choosen_skill_index];

    // call printAction(string, RPG) and use choosen_skill and (*opponent)
    // as the parameters
    printAction(choosen_skill, (*opponent));

    // call attack on opponent
    attack(opponent);
    
}