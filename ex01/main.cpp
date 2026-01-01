#include "Zombie.hpp"

int main(void)
{
    std::cout << "\n#First: allocation in the heap (manual)\n";
    std::cout << "  We create and array of objects using \"new[]\"\n";
    std::cout << "  The objects persist until we free it with \"delete[]\"\n\n";

    int N = 3;
    Zombie* heapZombies = zombieHorde(N, "Hamid");

    for (int i = 0; i < N; ++i)
        heapZombies[i].announce();

    std::cout << "\n  The objects are still alive\n";
    std::cout << "  We need to delete them manually\n\n";

    delete[] heapZombies;

    return 0;
}