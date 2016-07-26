#include "elf.h"

namespace cs_creature
{
elf::elf()
{

}





    elf::elf(int newStrength, int newHitpoints)
{
    strength = newStrength;
    hitpoints = newHitpoints;
}





string elf::getSpecies()
{
    return "elf";
}





int elf::getDamage()
{
    int damage;

    damage = (rand() % strength) + 1;
    cout << getSpecies() << " attacks for " << damage << " points!" << endl;

    if ((rand() % 2) == 0)
    {
        cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
        damage *= 2;
    }


    return damage;
}
}
