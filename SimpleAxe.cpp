/*
 * File:   SimpleAxe.cpp
 * Author: Sean <pianka@eml.cc>
 *
 */

#include "SimpleAxe.h"


double SimpleAxe::hit(double armor){
    double damage;

    if (armor > 50)
    {
        damage = hitPoints - static_cast<int>(armor / 2);
    }
    else
    {
        damage = static_cast<int>(hitPoints * 1.2) - armor;
    }

    if (damage < 0){
        return 0;
    }
    return damage;
}
