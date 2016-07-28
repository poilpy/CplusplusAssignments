#include "cyberdemon.h"
namespace cs_creature
{
cyberdemon::cyberdemon()
{

}





cyberdemon::cyberdemon(int newStrength, int newHitpoints)
    :demon(newStrength, newHitpoints)
{

}





string cyberdemon::getSpecies()
{
    return "cyberdemon";
}






}
