#ifndef SICT_HERO_H_
#define SICT_HERO_H_

#include <iostream>

#define MAX_NAME 20

namespace sict
{
    
    class Hero
    {
    private:
        char name[MAX_NAME+1];
        double strength;
    
    public:
        void display(std::ostream&) const;
    
        Hero();
        Hero(char*, double);
    
        bool empty() const;
        double getStrength() const;
    };

    bool operator<(const Hero&, const Hero&);
};
#endif
