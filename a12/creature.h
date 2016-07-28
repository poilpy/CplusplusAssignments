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
    creature(int newStrength, int newHitpoints);
    virtual int getDamage();
    int getStrength();
    int getHitpoints();
    void setStrength(int newStrength);
    void setHitpoints(int newHitpoints);
    virtual string getSpecies() = 0;

private:
    int strength;
    int hitpoints;
};
}
#endif // CREATURE_H

/*
default human strength/hitpoints: 10/10
default elf strength/hitpoints: 10/10
default cyberdemon strength/hitpoints: 10/10
default balrog strength/hitpoints: 10/10
non-default human strength/hitpoints: 20/30
non-default elf strength/hitpoints: 40/50
non-default cyberdemon strength/hitpoints: 60/70
non-default balrog strength/hitpoints: 80/90


Examples of human damage:
The human attacks for 11 points!
 Total damage = 11

The human attacks for 1 points!
 Total damage = 1

The human attacks for 9 points!
 Total damage = 9

The human attacks for 16 points!
 Total damage = 16

The human attacks for 11 points!
 Total damage = 11

The human attacks for 13 points!
 Total damage = 13

The human attacks for 2 points!
 Total damage = 2

The human attacks for 3 points!
 Total damage = 3

The human attacks for 15 points!
 Total damage = 15

The human attacks for 13 points!
 Total damage = 13


Examples of elf damage:
The elf attacks for 3 points!
Magical attack inflicts 3 additional damage points!
 Total damage = 6

The elf attacks for 9 points!
Magical attack inflicts 9 additional damage points!
 Total damage = 18

The elf attacks for 20 points!
 Total damage = 20

The elf attacks for 7 points!
Magical attack inflicts 7 additional damage points!
 Total damage = 14

The elf attacks for 26 points!
Magical attack inflicts 26 additional damage points!
 Total damage = 52

The elf attacks for 26 points!
 Total damage = 26

The elf attacks for 39 points!
Magical attack inflicts 39 additional damage points!
 Total damage = 78

The elf attacks for 38 points!
Magical attack inflicts 38 additional damage points!
 Total damage = 76

The elf attacks for 10 points!
 Total damage = 10

The elf attacks for 31 points!
Magical attack inflicts 31 additional damage points!
 Total damage = 62


Examples of cyberdemon damage:
The cyberdemon attacks for 45 points!
 Total damage = 45

The cyberdemon attacks for 32 points!
Demonic attack inflicts 50 additional damage points!
 Total damage = 82

The cyberdemon attacks for 21 points!
 Total damage = 21

The cyberdemon attacks for 60 points!
Demonic attack inflicts 50 additional damage points!
 Total damage = 110

The cyberdemon attacks for 18 points!
 Total damage = 18

The cyberdemon attacks for 46 points!
 Total damage = 46

The cyberdemon attacks for 48 points!
 Total damage = 48

The cyberdemon attacks for 13 points!
 Total damage = 13

The cyberdemon attacks for 56 points!
Demonic attack inflicts 50 additional damage points!
 Total damage = 106

The cyberdemon attacks for 60 points!
 Total damage = 60


Examples of balrog damage:
The balrog attacks for 3 points!
Balrog speed attack inflicts 22 additional damage points!
 Total damage = 25

The balrog attacks for 9 points!
Balrog speed attack inflicts 75 additional damage points!
 Total damage = 84

The balrog attacks for 25 points!
Balrog speed attack inflicts 52 additional damage points!
 Total damage = 77

The balrog attacks for 5 points!
Balrog speed attack inflicts 2 additional damage points!
 Total damage = 7

The balrog attacks for 59 points!
Demonic attack inflicts 50 additional damage points!
Balrog speed attack inflicts 6 additional damage points!
 Total damage = 115

The balrog attacks for 3 points!
Balrog speed attack inflicts 3 additional damage points!
 Total damage = 6

The balrog attacks for 9 points!
Demonic attack inflicts 50 additional damage points!
Balrog speed attack inflicts 33 additional damage points!
 Total damage = 92

The balrog attacks for 50 points!
Balrog speed attack inflicts 40 additional damage points!
 Total damage = 90

The balrog attacks for 25 points!
Balrog speed attack inflicts 28 additional damage points!
 Total damage = 53

The balrog attacks for 75 points!
Balrog speed attack inflicts 60 additional damage points!
 Total damage = 135
*/
