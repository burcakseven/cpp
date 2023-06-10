#include "HumanB.hpp"

HumanB::HumanB() : weapon(*(new Weapon()))
{
}

HumanB::HumanB(const std::string& name) :weapon(*(new Weapon()))
{
    this->name = name;
}

void HumanB::setWeapon(const Weapon& wp)
{
    weapon = wp;
}

void HumanB::attack()
{
    if(weapon.getType() == "")
        std::cout << name << " doesn't have weapon" << std::endl;
    else
        std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}