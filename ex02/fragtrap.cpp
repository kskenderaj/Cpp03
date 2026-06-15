#include "fragtrap.hpp"

FragTrap::FragTrap(const std::string& name)
    : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap " << this->name << " has been created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
    : ClapTrap(other)
{
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if(this != &other)
        ClapTrap::operator=(other);
    return(*this);
}

void FragTrap::attack(const std::string& target)
{
    if(hitPoints == 0)
    {
        std::cout << "FragTrap" << name << "cant attack has no hitpoints!" << std::endl;
        return;
    }
    if(energyPoints == 0)
    {
        std::cout << "FragTrap" << name << "cant attack has no energy points!" << std::endl; 
    }
    energyPoints--;
    std::cout <<"FragTrap " << name << "attacks " << target
              <<", causing " << attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFiveGuys(void)
{
    std::cout << "FragTrap " << name << " requests a high five! ✋" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " has been destroyed!" << std::endl;
}