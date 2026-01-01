#include "HumanA.hpp"

HumanA::HumanA(std::string type, Weapon& weapon) : _type(type), _weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack() {
    std::cout << _type << " attacks with their " << _weapon.getType() << std::endl;
}