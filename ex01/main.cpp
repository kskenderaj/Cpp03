#include "scavtrap.hpp"

int main()
{
    std::cout << "==== Creating ScavTrap ====" << std::endl;
    ScavTrap scav("Alice");
    
    std::cout << "\n==== Testing attack() ====" << std::endl;
    scav.attack("Bob");
    
    std::cout << "\n==== Testing takeDamage() (inherited) ====" << std::endl;
    scav.takeDamage(20);
    
    std::cout << "\n==== Testing beRepaired() (inherited) ====" << std::endl;
    scav.beRepaired(10);
    
    std::cout << "\n==== Testing guardGate() (unique to ScavTrap) ====" << std::endl;
    scav.guardGate();
    
    std::cout << "\n==== Multiple attacks ====" << std::endl;
    scav.attack("Charlie");
    scav.attack("Dave");
    
    std::cout << "\n==== Testing with second ScavTrap ====" << std::endl;
    ScavTrap scav2("Bob");
    scav2.guardGate();
    
    std::cout << "\n==== Destruction order (reverse of creation) ====" << std::endl;
    return 0;
}