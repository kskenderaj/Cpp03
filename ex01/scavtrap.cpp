#include "scavtrap.hpp"

ScavTrap::ScavTrap(const std::string& name)
    : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap " << this->name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
    : ClapTrap(other)
{
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if(this != &other)
        ClapTrap::operator=(other);
    return(*this);
}

void ScavTrap::attack(const std::string& target)
{
    if(hitPoints == 0)
    {
        std::cout << " ScavTrap " << name << " cant attack has no hit points! " << std::endl;
        return;
    }
    if(energyPoints == 0)
    {
        std::cout << "ScavTrap " << name << " cant attack has no energy points! " << std::endl;
        return;
    }
    energyPoints--;
    std::cout << " ScavTrap " << name << " attacks " << target
              << ", causing " <<attackDamage << " points of damage!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " has been destroyed!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in gatekeeper mode!" << std::endl;
}