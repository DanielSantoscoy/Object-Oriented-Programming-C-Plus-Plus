#include<iostream>
#include "Pokemon.h"

/**
 * @brief Construct a new Pokemon:: Pokemon Object
 * 
 *  
 */
Pokemon::Pokemon() {
    name = "unidentified";
    hp = 0;
    att = 0;
    def = 0;
    cout << "Default Constructor (Pokemon)\n";
}
/**
 * @brief Construct a new Pokemon:: Pokemon Object
 * 
 * @param name
 * @param hp
 * @param att
 * @param def
 * @param type 
 */
Pokemon::Pokemon(string name, int hp, int att, int def, vector<string> type) {
    this->name = name;
    this->hp = hp;
    att = att;
    def = def;
    type = type;
    cout << "Overloaded Constructor (Pokemon)\n";
}

/**
 * @brief says whatever this pokemon normally says
 * 
 */
void Pokemon::speak() {
    cout << "...\n";
}


void Pokemon::printStats() {
    printf("Name%s\t HP: %i\t DEF: %i\t ATT: %i\n", name.c_str(), hp, def, att);
    cout << "Type: ";
    for (int i = 0; i < type.size(); i++)
    {
        cout << type[i] << "\t";
    }
    cout << endl;
}