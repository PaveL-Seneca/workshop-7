#include <iostream>
#include "SuperHero.h"

namespace sict

{
    
void SuperHero::display(std::ostream& os) const {
    if(!empty()) {
        // display Hero part: shadow display function for Hero class
        Hero::display(os);
        os << "This hero has the following powers:" << std::endl;
        for(int i=0; i<size; i++) {
            os << powers[i] << " - ";
            if(powers[i] == 0)
                os << "failed power";
            else if(powers[i] < 11)
                os << "firebolt";
            else if(powers[i] < 21)
                os << "invisibility";
            else if(powers[i] < 31)
                os << "double strength";
            else if(powers[i] < 41)
                os << "shield";
            else
                os << "speed";
            os << std::endl;
        }
    }
}

// Adds p to the list of powers if there is space
void SuperHero::addPower(int p) {
    if(size==MAX_POWER) return;
    powers[size++] = p>=0 ? p : 0;
}

SuperHero::SuperHero() : Hero() {
    size = 0;
}

SuperHero::SuperHero(int* powers_, int size_, char name_[], double stren) : Hero(name_, stren) {
    for(int i=0; i<size_; i++)
        powers[i] = powers_[i] >= 0 ? powers_[i] : 0;
    size = size_;
}

SuperHero operator+(const SuperHero& hero, int p) {
    SuperHero res(hero);
    res.addPower(p);
    return res;
}

SuperHero operator+(int p, const SuperHero& hero) {
    return hero + p;
}

SuperHero& SuperHero::operator+=(int p) {
    *this = *this + p;
    return *this;
}
}
