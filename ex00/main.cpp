#include "Zombie.hpp"

int main()
{

    // Crée un zombie sur le tas
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    delete heapZombie; // Destruction manuelle

    // Crée un zombie sur la pile
    randomChump("StackZombie");

    return 0;
};
