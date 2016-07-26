#include "balrog.h"
namespace cs_creature
{
balrog::balrog()
{

}





balrog::balrog(int newStrength, int newHitpoints)
{
    strength = newStrength;
    hitpoints = newHitpoints;
}





string balrog::getSpecies()
{
    return "balrog";
}





int balrog::getDamage()
{
    int damage;

    damage = (rand() % strength) + 1;
    cout << getSpecies() << " attacks for " << damage << " points!" << endl;

    if (rand() % 4 == 0) {
            damage = damage + 50;
            cout << "Demonic attack inflicts 50 additional damage points!" << endl;
        }

    int damage2 = (rand() % strength) + 1;
        cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
        damage += damage2;

    return damage;
}
}
