#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    _name = name;
    _weapon = NULL;
    std::cout << "Constructor human B called." << std::endl;
};
HumanB::~HumanB()
{
    std::cout << "Destructor human B called." << std::endl;
};
void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
};

void    HumanB::attack(void)
{
    if(_weapon)
        std::cout << this->_name << " attacks with their " << (*_weapon).getType() << std::endl;
    else
		std::cout << this->_name << " does not have a weapon to attack!" << std::endl;
};