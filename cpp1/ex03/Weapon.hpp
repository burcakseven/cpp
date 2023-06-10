#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>

class Weapon
{
private:
    std::string type;
public:
    Weapon(const std::string& type);
    const std::string& getType();
    void setType(const std::string& type);
};

#endif