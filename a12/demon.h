#ifndef DEMON_H
#define DEMON_H

#include "creature.h"

namespace cs_creature
{
class demon : public creature
{
public:
    demon();
    demon(int newStrength, int newHitpoints);
    int getDamage();
    string getSpecies();


private:
};
}
#endif // DEMON_H
