#ifndef SICT_SUPER_HERO_H_
#define SICT_SUPER_HERO_H_

#include "Hero.h"

#define MAX_POWER 4

namespace sict
{
    class SuperHero : public Hero
    {
    private:
        int powers[MAX_POWER];
        int size;
    
    public:
        SuperHero();
        SuperHero(int*, int, char*, double);
        void addPower(int);
        void display(std::ostream&) const;
        SuperHero& operator+=(int);
    };

    SuperHero operator+(const SuperHero&, int);
    SuperHero operator+(int, const SuperHero&);
};
#endif
