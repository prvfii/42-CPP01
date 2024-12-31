#include "Harl.hpp"

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        std::string level = argv[1];
        Harl myobj;
        myobj.complain(level);
    }
    else
        std::cout << "Wrong argument number ! " << std::endl;
    return (0);
}