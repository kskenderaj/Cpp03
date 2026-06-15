#include "claptrap.hpp"

int main ()
{
    ClapTrap clap("Bender");

    clap.attack("Robot");
    clap.takeDamage(5);
    clap.beRepaired(3);

    //Drain energy
    for(int i = 0;i < 10; i++)
    {
        clap.attack("Robot");
        clap.beRepaired(5); //Should fail if no energy
    }
    return(0);
}