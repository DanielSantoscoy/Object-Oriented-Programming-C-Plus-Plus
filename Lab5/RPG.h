#ifndef RPG_H
#define RPG_H

#include <string> 


using namespace std;

const int SKILL_SIZE = 2;

class RPG {
    public:
        //constructors
        RPG();
        RPG(string name, int health, int strength, int defense, string type);

        //Complete the rest
        void setSkills();

        void printAction(string name, RPG);

        void updateHealth(int new_health);

        void attack(RPG *);

        void useSkill(RPG *);

        bool isAlive() const;

        const string getName();

        const int getHealth();

        const int getStrength();

        const int getDefense();

        const string getType();


    private:
        string name;
        
        int health;
       
        int strength;
      
        int defense;
        

        //Complete the rest
        string type; //warrior, mage, thief, archer
        string skills[SKILL_SIZE];
};

#endif