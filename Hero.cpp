#include <cstring>
#include "Hero.h"

namespace sict
{
    
    void Hero::display(std::ostream& os) const
    {
        if(!empty())
        {
            os << name << " - " << strength << std::endl;
        }
    }
//edit start
    Hero::Hero()
    {
        name[0] = '\0';
        strength = 0;
    }
    
    Hero::Hero(double no)
    {
        strength = no;
    }
    
    Hero::Hero(char name_[], double no)
    {
        strncpy(name, name_, MAX_NAME);
        name[MAX_NAME] = '\0';
        strength = no;
    }
    
    bool Hero::empty() const
    {
        if ((name[0] != '\0') && (strength != 0 || strength < 0))
        {
            Hero();
        }
            return false;
    }
    
    
    double Hero::getStrength() const
    {
        return strength;
    }
    
    bool operator<(const Hero& hero1, const Hero& hero2)
    {
        return hero1.getStrength() < hero2.getStrength();
    }
    
//edit finish
}
