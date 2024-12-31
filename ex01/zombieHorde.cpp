#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i = 0;

    Zombie* z = new Zombie[N];
    while(N > i)
    {
        z[i].set_name(name);
        //z[i].announce();
        i++;
    };
    return z;
};
