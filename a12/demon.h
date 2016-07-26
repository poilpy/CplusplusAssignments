#ifndef DEMON_H
#define DEMON_H

#include "creature.h"

namespace cs_creature
{
class demon : public creature
{
public:
    demon();
    int getDamage();
    string getSpecies();

protected:

private:
};
}
#endif // DEMON_H
