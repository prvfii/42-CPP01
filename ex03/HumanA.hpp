#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>
class HumanA
{
private:
        Weapon* _weapon;
        std::string _name;
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void    attack(void);
};

#endif
