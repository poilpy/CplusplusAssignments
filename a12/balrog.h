#ifndef BALROG_H
#define BALROG_H

#include "demon.h"

namespace cs_creature
{
class balrog : public demon
{
public:
    balrog();
    balrog(int newStrength, int newHitpoints);
    int getDamage();
    string getSpecies();

protected:

private:
};
}
#endif // BALROG_H
