#include "HumanA.hpp"

HumanA::HumanA():weapon(*(new Weapon()))
{

}

HumanA::HumanA(const std::string& name,const Weapon& type):weapon(*(new Weapon()))
{
    this->name = name;
    weapon = type;
}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}