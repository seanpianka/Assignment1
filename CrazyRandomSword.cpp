/*
 * File:   CrazyRandomSword.cpp
 * Author: Sean <pianka@eml.cc>
 *
 */
#include "CrazyRandomSword.h"


double CrazyRandomSword::hit(double armor){
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> ignored_armor_dist(2, static_cast<int>((armor * 0.66)));
    double damage = hitPoints - (armor - ignored_armor_dist(mt));

    if (damage < 0) {
        return 0;
    }

    return damage;
}
