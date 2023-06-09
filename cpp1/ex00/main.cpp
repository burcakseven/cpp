#include "Zombie.hpp"

int main()
{
    Zombie* zb = newZombie("hatice");
    zb->announce();
    randomChump("netice");
    delete zb;
    return 0;
}