#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
    std::string _type;
    Weapon& _weapon;

public:
    HumanA(std::string type, Weapon& weapon);
    ~HumanA();

    void attack();
};


#endif