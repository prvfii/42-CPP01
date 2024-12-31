#include "Zombie.hpp"


Zombie* zombieHorde(int N, std::string name);

// int main(int argc, char **argv)
// {
// 	if (argc == 1)
// 	{
// 		Zombie *horde = zombieHorde(10, "YodaZombie");
// 		Zombie *horde2 = zombieHorde(10, "PikachuZombie");

// 		delete [] horde;
// 		delete [] horde2;
// 	}
// 	if (argc == 2)
// 	{
// 		int number = atoi(argv[1]);
// 		if (number > 0)
// 		{
// 			Zombie *horde = zombieHorde(number, "RandomZombie");
// 			delete [] horde;	
// 		}
// 		else
// 			return (1);
// 	}
// 	return (0);
// }

int main() {
    int N = 5;
    std::string name = "audirs6";

    // Créer une horde de zombies
    Zombie* horde = zombieHorde(N, name);

    // Chaque zombie annonce son nom
    for (int i = 0; i < N; ++i) {
        horde[i].announce();
    }

    // Libérer la mémoire pour éviter les fuites
    delete[] horde;

    return 0;
}
