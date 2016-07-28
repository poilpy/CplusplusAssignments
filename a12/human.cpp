#include "human.h"

namespace cs_creature
{
human::human()
{

}





human::human(int newStrength, int newHitpoints)
:
    creature(newStrength, newHitpoints)
    {

    }





string human::getSpecies()
{
    return "human";
}






}
