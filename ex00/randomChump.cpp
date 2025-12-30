#include "Zombie.hpp"

void randomChump( std::string name )
{
    // Create a Zombie allocated automatically
    Zombie zombie(name);

    // Announce its name
    zombie.announce();
}