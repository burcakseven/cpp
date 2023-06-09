#include "Zombie.hpp"

int main()
{
    Zombie* zb = zombieHorde(5,"uyhaçen");

    for (int i = 0; i < 5; i++)
    {
        zb[i].announce();
    }
    delete[] zb;
}