#include "Zombie.hpp"

std::string Zombie::get_name() const
{
    return this->name;
};

void    Zombie::announce(void)
{
    std::string name;

    name = get_name();
    std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
};
//Constructeur
Zombie::Zombie(std::string name) : name(name)
{
    std::cout << "Zombie " << this->name << " est créé." << std::endl;
};
//Destructeur
Zombie::~Zombie() {
    std::cout << "Zombie " << this->name << " est détruit." << std::endl;
};
