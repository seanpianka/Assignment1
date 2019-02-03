/*
 * File:   SimpleHammer.cpp
 * Author: Sean <pianka@eml.cc>
 *
 */

#include "SimpleHammer.h"


double SimpleHammer::hit(double armor){
    double damage = hitPoints - armor;

    if (armor < 30)
    {
        return hitPoints;
    }
    else if (damage < 0) {
        return 0;
    }

    return damage;
}
