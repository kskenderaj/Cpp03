#include "fragtrap.hpp"

int main(void)
{
    std::cout << "=== FRAGTRAP CONSTRUCTION TEST ===" << std::endl;
    FragTrap frag1("Alice");
    
    std::cout << "\n=== FRAGTRAP ATTACKS ===" << std::endl;
    frag1.attack("Bob");
    frag1.attack("Charlie");
    
    std::cout << "\n=== HIGH FIVES REQUEST ===" << std::endl;
    frag1.highFiveGuys();
    
    std::cout << "\n=== COPY CONSTRUCTOR ===" << std::endl;
    FragTrap frag2(frag1);
    
    std::cout << "\n=== ASSIGNMENT OPERATOR ===" << std::endl;
    FragTrap frag3("David");
    frag3 = frag1;
    
    std::cout << "\n=== TESTING COPY ===" << std::endl;
    frag2.highFiveGuys();
    frag3.attack("Eve");
    
    std::cout << "\n=== DESTRUCTION TEST ===" << std::endl;
    return (0);
}