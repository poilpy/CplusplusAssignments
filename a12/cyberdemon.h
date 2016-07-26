#ifndef CYBERDEMON_H
#define CYBERDEMON_H

#include "demon.h"

namespace cs_creature
{
class cyberdemon : public demon
{
public:
    cyberdemon();
    cyberdemon(int newStrength, int newHitpoints);
    int getDamage();
    string getSpecies();

protected:

private:
};
}
#endif // CYBERDEMON_H
