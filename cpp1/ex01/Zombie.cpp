#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::Zombie(const std::string name)
{
    this->name = name;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}