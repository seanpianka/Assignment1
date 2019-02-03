
/*
 * File:   main.cpp
 * Author: Javier <jrescobara@gmail.com>
 *
 * Created on September 25, 2017, 3:19 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include "Weapon.h"
#include "WeaponFactory.h"

using namespace std;

/**
 * Simulates the behavior of a weapon in the presence and absence of armor, by
 * printing its damage on standard output.
 * @param weapon Weapon to simulate
 * @param armor Armor points
 */
void simulateWeapon(Weapon * weapon, double armor)
{
    cout << weapon->getName() << " inflicts " << weapon->hit() << " when armor is 0" << std::endl;
    cout << weapon->getName() << " inflicts " << weapon->hit(armor) << " when armor is " << armor << std::endl;
    cout << weapon->getName() << " inflicts " << weapon->hit(armor + 1) << " when armor is " << armor + 1 << std::endl << std::endl;
}

/*
 *
 */
int main(int argc, char** argv) {

    double armor = 29;
    Weapon *weapon = nullptr;

    for (std::string weaponName : std::vector<std::string>({"sword", "spear", "axe", "hammer", "crazy random sword"}))
    {
        weapon = WeaponFactory::getInstance()->getWeapon(weaponName);
        simulateWeapon(weapon, armor);
        delete(weapon);
    }

    return 0;
}

