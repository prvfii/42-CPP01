#include "Harl.hpp"

void	Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*ptrtoft[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i = 0;
	while(i < 4)
	{
		if(level == levels[i])
		{
			(this->*ptrtoft[i])();
			return;
		}
		i++;
	}
	std::cout << "Harl needs a valid level" << std::endl;
};
