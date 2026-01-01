#include "HumanB.hpp"

HumanB::HumanB(std::string type) {
    _type = type;
    _weapon = NULL;
}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& weapon) {
    _weapon = &weapon;
}

void HumanB::attack() {
    if (_weapon) {
        std::cout << _type << " attacks with their " << _weapon->getType() << std::endl;
    }
}
