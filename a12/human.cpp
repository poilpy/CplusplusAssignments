#include "human.h"

namespace cs_creature{
human::human()
{

}





human::human(int newStrength, int newHitpoints)
{
    strength = newStrength;
    hitpoints = newHitpoints;
}





    string human::getSpecies()
    {
        return "human";
    }





    int human::getDamage()
    {
        int damage;

        damage = (rand() % strength) + 1;
        cout << getSpecies() << " attacks for " << damage << " points!" << endl;

        return damage;
    }
}
