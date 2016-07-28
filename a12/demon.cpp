#include "demon.h"

namespace cs_creature
{
demon::demon()
{

}





demon::demon(int newStrength, int newHitpoints)
    :creature(newStrength, newHitpoints)
{

}





int demon::getDamage()
{
    int damage;

    damage = creature::getDamage();
//    cout << " attacks for " << damage << " points!" << endl;

    if (rand() % 4 == 0)
    {
        damage = damage + 50;
        cout << "Demonic attack inflicts 50 additional damage points!" << endl;
    }

    return damage;
}





string demon::getSpecies()
{
    return "demon";
}






}
