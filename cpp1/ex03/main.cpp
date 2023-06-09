#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    Weapon* wp = new Weapon();
    wp->setType("denem");
    HumanA* hm = new HumanA("ay",*wp);
    hm->attack();

    HumanB *hmb = new HumanB("hm");
    hmb->attack();

    hmb->setWeapon(*wp);
    hmb->attack();
}