#include <iostream>
#include "SuperHero.h"

using namespace sict;

int main()
{
    int powers[] = {2, 44, 20, -3};
    
    SuperHero hercules(powers, 4, "Hercules", 400);
    
    hercules.display(std::cout);
    
    return 0;
}
