#ifndef POKEMON_H
#define POKEMON_H

#include<string>
#include<vector>
using namespace std;

class Pokemon {
    public:
    //---------------------- Constructors -----------------------
    Pokemon();
    Pokemon(string name, int hp, int attack, int defense, vector<string> type);
    //---------------------- Mutator Functions -------------------
    virtual void speak();
    virtual void printStats();
    //---------------------- Acessor Functions --------------------

    protected:
        string name;
        int hp;
        int attack;
        int defense;
        vector<string> type;

};
#endif