#ifndef HUMAN_B
#define HUMAN_B
#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon weapon;
public:
    HumanB(void);
    HumanB(const std::string& name);
    void attack();
    void setWeapon(const Weapon& wp);
};

#endif