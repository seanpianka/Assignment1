/*
 * File:   CrazyRandomSword.h
 * Author: Sean <pianka@eml.cc>
 *
 */

#include <string>
#include <random>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy random sword", 78.0)
    {
        std::random_device rd;
        std::mt19937 mt(rd());
        std::uniform_int_distribution<int> damage_dist(7, 100);
        hitPoints = damage_dist(mt);
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */
