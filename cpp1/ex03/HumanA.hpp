#ifndef HUMAN_A
#define HUMAN_A
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon& weapon;
public:
    HumanA(void);
    HumanA(const std::string& name,const Weapon& type);
    void attack();
};

#endif