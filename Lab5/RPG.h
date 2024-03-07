#define RPG_H

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

        void updateHealth(int health);

        void attack(RPG *);

        void useSkill(RPG *);

        const bool isAlive();

        const string getName();

        const int getHealth();

        const int getStrength();

        const int getDefense();

    private:
        string name = "Wiz";
        
        int health = 100;
       
        int strength = 100;
      
        int defense = 100;
        

        //Complete the rest
        string.type; //warrior, mage, thief, archer
        string skills[SKILL_SIZE];
};

#endif