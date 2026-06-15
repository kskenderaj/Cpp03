#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
protected:
    std::string     name;
    unsigned int    hitPoints;
    unsigned int    energyPoints;
    unsigned int    attackDamage;

public:
// Orthodox canonical form
    ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap &other);
    ClapTrap &operator=(const ClapTrap &other);
    ~ClapTrap();

    //Member Functions
    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};

#endif