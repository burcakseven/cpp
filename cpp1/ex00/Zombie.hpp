#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie(const std::string name);
    void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif