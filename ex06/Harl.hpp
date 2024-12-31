#ifndef HARL_HPP
#define HARL_HPP

#define _debug 0
#define _info 1
#define _warning 2
#define _error 3

#include <string>
#include <iostream>

class Harl
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    void complain(std::string level);
};

#endif