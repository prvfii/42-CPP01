#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie created" << std::endl;
};

Zombie::~Zombie()
{
    std::cout << "Zombie destroyed" << std::endl;
};

void    Zombie::announce(void)
{
    std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
};

void   Zombie::set_name(std::string name)
{
    this->name = name;
};
