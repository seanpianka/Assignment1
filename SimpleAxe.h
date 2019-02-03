/*
 * File:   SimpleAxe.h
 * Author: Sean <pianka@eml.cc>
 *
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEAXE_H
#define SIMPLEAXE_H

/**
 * Defines the behavior of a common sword (hitpoint = 50, it does not ignore armor points)
 */
class SimpleAxe : public Weapon {
public:

    SimpleAxe() : Weapon("Simple axe", 42.0)
    {
    }

    virtual ~SimpleAxe() {};

    virtual double hit(double armor);

};

#endif /* SIMPLEAXE_H */
