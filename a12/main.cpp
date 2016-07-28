#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "human.h"
#include "elf.h"
#include "cyberdemon.h"
#include "balrog.h"

using namespace std;
using namespace cs_creature;

void battleArena(creature &creature1, creature& creature2);

int main()
{
	srand((time(0)));

	elf e(50,50);
	balrog b(50,50);
	human h1(20, 60);
	human h2(30, 40);
	elf e1(15, 45);
	balrog b1(30, 90);
	balrog b2(25, 100);
	cyberdemon c1(20, 100);
	cyberdemon c2(25, 80);


	battleArena(e, b);
	battleArena(h1, e1);
	battleArena(e1, c1);
	battleArena(b1, c1);
	battleArena(b2, c2);
	battleArena(c1, h1);

}





void battleArena(creature &creature1, creature& creature2)
{

    while(creature1.getHitpoints() > 0 || creature2.getHitpoints() > 0)
    {
        creature1.setHitpoints(creature1.getHitpoints() - creature2.getDamage());
        creature2.setHitpoints(creature2.getHitpoints() - creature1.getDamage());
    }

    cout << endl;
}


/*
The balrog attacks for 2 points!
Balrog speed attack inflicts 12 additional damage points!
The elf attacks for 43 points!
The balrog attacks for 33 points!
Balrog speed attack inflicts 19 additional damage points!
The elf attacks for 36 points!
Magical attack inflicts 36 additional damage points!

The elf attacks for 3 points!
Magical attack inflicts 3 additional damage points!
The human attacks for 7 points!
The elf attacks for 14 points!
The human attacks for 8 points!
The elf attacks for 11 points!
The human attacks for 12 points!
The elf attacks for 9 points!
Magical attack inflicts 9 additional damage points!
The human attacks for 20 points!
The elf attacks for 2 points!
The human attacks for 2 points!
The elf attacks for 11 points!
The human attacks for 6 points!

The cyberdemon attacks for 13 points!
The elf attacks for 8 points!
The cyberdemon attacks for 16 points!
The elf attacks for 12 points!
Magical attack inflicts 12 additional damage points!
The cyberdemon attacks for 20 points!
The elf attacks for 5 points!
The cyberdemon attacks for 10 points!
The elf attacks for 15 points!
The cyberdemon attacks for 18 points!
The elf attacks for 8 points!
Magical attack inflicts 8 additional damage points!
The cyberdemon attacks for 20 points!
The elf attacks for 10 points!
Magical attack inflicts 10 additional damage points!
The cyberdemon attacks for 6 points!
The elf attacks for 5 points!
The cyberdemon attacks for 16 points!
The elf attacks for 3 points!
Magical attack inflicts 3 additional damage points!
The cyberdemon attacks for 9 points!
The elf attacks for 14 points!

The cyberdemon attacks for 19 points!
Demonic attack inflicts 50 additional damage points!
The balrog attacks for 18 points!
Balrog speed attack inflicts 15 additional damage points!
The cyberdemon attacks for 1 points!
The balrog attacks for 28 points!
Balrog speed attack inflicts 26 additional damage points!
The cyberdemon attacks for 7 points!
Demonic attack inflicts 50 additional damage points!
The balrog attacks for 22 points!
Balrog speed attack inflicts 28 additional damage points!

The cyberdemon attacks for 10 points!
The balrog attacks for 8 points!
Balrog speed attack inflicts 20 additional damage points!
The cyberdemon attacks for 15 points!
Demonic attack inflicts 50 additional damage points!
The balrog attacks for 7 points!
Balrog speed attack inflicts 13 additional damage points!
The cyberdemon attacks for 13 points!
Demonic attack inflicts 50 additional damage points!
The balrog attacks for 8 points!
Demonic attack inflicts 50 additional damage points!
Balrog speed attack inflicts 24 additional damage points!
*/
