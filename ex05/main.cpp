#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl obj;
	if(ac == 1)
	{
		std::cout << "Harl needs a level : DEBUG, INFO, WARNING, ERROR" << std::endl;
		return(1);
	}
	obj.complain(av[1]);
	return (0);
}