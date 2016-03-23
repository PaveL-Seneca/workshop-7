#include <iomanip>
#include "SuperHero.h"

namespace sict
{
    
    void SuperHero::display(std::ostream& os) const
    {
        // Check to make sure object is not empty
        if ((powers[0] != '\0') || (name[0] != '\0' ) || (strength != 0) || (size[0] != '\0') )
        {
            // display Hero part: shadow display function for Hero class
            
            Hero::display(os);
            
            os << "This hero has the following powers:" << std::endl;
            for(int i = 0; i < size; i++) //Compiler gives mistake here
            {
                os << powers[i] << " - ";
                if(powers[i] == 0)
                {
                    os << "failed power";
                }
                else if(powers[i] < 11)
                {
                    os << "firebolt";
                }
                else if(powers[i] < 21)
                {
                    os << "invisibility";
                }
                else if(powers[i] < 31)
                {
                    os << "double strength";
                }
                else if(powers[i] < 41)
                {
                    os << "shield";
                }
                else
                {
                    os << "speed";
                }
                os << std::endl;
            }
        }
    }
    
    SuperHero::SuperHero()
    {
        powers[0] = 0;
        name[0] = '\0';
        strength = 0;
        size[0] = 0;
    }
}