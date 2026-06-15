#include "claptrap.hpp"
ClapTrap::ClapTrap(const std::string& name)
    : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << this->name << " has been created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " has been destroyed!" <<std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(hitPoints == 0)
    {
        std::cout << "ClapTrap " << name << " cant attack, it has no hit points!" << std::endl;
        return;
    }
    if(energyPoints == 0)
    {
        std::cout << "ClapTrap " << name << "cant attack, it has no energy points" << std::endl;
    }
    energyPoints--;
    std::cout << "ClapTrap " << name << "attacks " << target
              <<", causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(hitPoints <= amount)
        hitPoints  = 0;
    else
        hitPoints -= amount;
    std::cout << "ClapTrap " << name << " takes " << amount
        << " damage! HP: " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoints == 0)
    {
        std::cout << "ClapTrap " << name << "cant repair, it has no hit points!" <<std::endl;
        return;
    }
    if(energyPoints == 0)
    {
        std::cout << "ClapTrap " << name << " cant repair, it has no energy!" << std::endl;
        return;
    }
    energyPoints--;
    hitPoints += amount;
    std::cout << "ClapTrap " << name << "repairs itself and gains "
              << amount << " hit points! HP: " <<hitPoints << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
    : name(other.name), hitPoints(other.hitPoints),
        energyPoints(other.energyPoints), attackDamage(other.attackDamage)
{
    std::cout << " ClapTrap " << this->name << " has been created (copy)!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if(this != &other)
    {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    return(*this);
}
