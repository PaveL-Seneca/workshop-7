#include <cstring>
#include "Hero.h"


namespace sict

{
    
void Hero::display(std::ostream& os) const {
    if(!empty())
        os << name << " - " << strength << std::endl;
}

Hero::Hero() {
    name[0] = '\0';
    strength = 0;
}

Hero::Hero(char name_[], double stren) {
    strncpy(name, name_, MAX_NAME);
    name[MAX_NAME] = '\0';
    strength = stren;
}

bool Hero::empty() const {
    return (name[0]=='\0' && strength==0);
}

double Hero::getStrength() const {
    return strength;
}

bool operator<(const Hero& hero1, const Hero& hero2) {
    return hero1.getStrength() < hero2.getStrength();
}
}