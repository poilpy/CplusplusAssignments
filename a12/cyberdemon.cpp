#include "cyberdemon.h"
namespace cs_creature
{
cyberdemon::cyberdemon()
{

}





cyberdemon::cyberdemon(int newStrength, int newHitpoints)
{
    strength = newStrength;
    hitpoints = newHitpoints;
}





string cyberdemon::getSpecies()
{
    return "cyberdemon";
}





int cyberdemon::getDamage()
{
    int damage;

    damage = (rand() % strength) + 1;
    cout << getSpecies() << " attacks for " << damage << " points!" << endl;

    if (rand() % 4 == 0) {
            damage = damage + 50;
            cout << "Demonic attack inflicts 50 additional damage points!" << endl;
        }

    return damage;
}
}
