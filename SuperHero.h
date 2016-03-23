#ifndef SICT_SUPER_HERO_H_
#define SICT_SUPER_HERO_H_

#include "Hero.h"

#define MAX_POWER 4

namespace sict
{
    class SuperHero : public Hero
    {
    private:
        int powers[MAX_POWER+1];
        char name[MAX_NAME+1];
        double strength;
        int size[];
    public:
    
        SuperHero();
        void display(std::ostream&) const;

    };
};

#endif