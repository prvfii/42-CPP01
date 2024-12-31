#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
    _name = name;
    _weapon = &weapon;
    std::cout << "Constructor human A called." << std::endl;
};
HumanA::~HumanA()
{
    std::cout << "Destructor human A called." << std::endl;
};

void    HumanA::attack(void)
{
    std::cout << _name << "attacks with their" << _weapon->getType() << std::endl;
};
