#include "balrog.h"
namespace cs_creature
{
balrog::balrog()
{

}





balrog::balrog(int newStrength, int newHitpoints)
    :demon(newStrength, newHitpoints)
{

}





string balrog::getSpecies()
{
    return "balrog";
}





int balrog::getDamage()
{
    int damage;

//    cout << "The " << getSpecies();
    damage = demon::getDamage();

    int damage2 = (rand() % getStrength()) + 1;
    cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
    damage += damage2;

    return damage;
}
}
