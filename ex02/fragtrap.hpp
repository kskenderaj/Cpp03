#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "claptrap.hpp"
#include <string>

class FragTrap : public ClapTrap
{
public:
    FragTrap(const std::string& name);
    FragTrap(const FragTrap &other);
    FragTrap &operator=(const FragTrap &other);
    ~FragTrap();

    void highFiveGuys(void);
    void attack(const std::string& target);
};

#endif