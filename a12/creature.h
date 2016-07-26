#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

namespace cs_creature
{
class creature
{
public:
    creature();
    int getDamage();
    int getStrength();
    int getHitpoints();

protected:
    int strength;
    int hitpoints;

private:
};
}
#endif // CREATURE_H
