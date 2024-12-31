#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>
class HumanB
{
private:
        Weapon* _weapon;
        std::string _name;
public:
    HumanB(std::string name);
    ~HumanB();
    void    setWeapon(Weapon &waepon);
    void    attack(void);
};

#endif
