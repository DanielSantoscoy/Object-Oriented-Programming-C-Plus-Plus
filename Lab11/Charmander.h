#ifndef CHARMENDER_H
#define CHARMENDER_H

#include<string>
#include<vector>
#include<Pokemon.h>
using namespace std;

class Charmender : public Pokemon {
    public:
        //---------------- Constructors ---------------
        Charmender();
        Charmender(string name, int hp, int attack, int defense, vector<string> t, vector<string> s);
        //---------------- Mutator Functions -----------------
        void speak()/* override */;
        void printStats()/*override*/;
        private:
            vector<string> skills;
            /* name , hp, attack, defense */
};
#endif