#include "Zombie.hpp"

int main(void)
{
    std::cout << "#First: allocation in the stack (automatic)\n";
    std::cout << "  The object is created automatically inside the function\n";
    std::cout << "  When the function finishes the object will be destroyed\n";
    std::cout << "  And the destructor is called\n\n";

    randomChump("Sa3id");

    std::cout << "\n#Second: allocation in the heap (manual)\n";
    std::cout << "  We create the object using \"new\"\n";
    std::cout << "  The object persists until we free it with \"delete\"\n\n";

    Zombie* heapZombie = newZombie("Hamid");

    heapZombie->announce();

    std::cout << "\n  The object is still alive\n";
    std::cout << "  We need to delete it manually\n\n";

    delete heapZombie;

    return 0;
}