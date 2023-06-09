#include "HumanA.hpp"

HumanA::HumanA(const std::string& name,const Weapon& type)
{
    this->name = name;
    weapon = type;
}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}