#include "creature.h"

namespace cs_creature
{
creature::creature()
{
    strength = 10;
    hitpoints = 10;
}





creature::creature(int newStrength, int newHitpoints)
{
    setStrength(newStrength);
    setHitpoints(newHitpoints);
}






int creature::getDamage()
{
    int damage;

    damage = (rand() % getStrength()) + 1;

    cout << "The " << getSpecies() << " attacks for " << damage << " points!" << endl;

    return damage;
}





int creature::getStrength()
{
    return strength;
}





int creature::getHitpoints()
{
    return hitpoints;
}





void creature::setStrength(int newStrength)
{
    strength = newStrength;
}






void creature::setHitpoints(int newHitpoints)
{
    hitpoints = newHitpoints;
}





string creature::getSpecies()
{
    return "creature";
}



}
