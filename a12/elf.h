#ifndef ELF_H
#define ELF_H

#include "creature.h"

namespace cs_creature
{
class elf : public creature
{
public:
    elf();
    elf(int newStrength, int newHitpoints);
    int getDamage();
    string getSpecies();


private:
};
}
#endif // ELF_H
