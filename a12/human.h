#ifndef HUMAN_H
#define HUMAN_H

#include "creature.h"

namespace cs_creature
{
class human : public creature
{
public:
    human();
    human(int newStrength, int newHitpoints);
    int getDamage();
    string getSpecies();

protected:

private:
};
}
#endif // HUMAN_H
