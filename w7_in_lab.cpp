
#include <iostream>
#include "Hero.h"
#include "SuperHero.h"

using namespace sict;
int main()
{
 /*
    // Testing of SuperHero
    int powers[]= {3, 42, 15};
    sict::SuperHero titan(powers, 3, "Titan", 500);
    titan.display(std::cout);
    cout << endl;
    titan+=31;
    titan.display(std::cout);
    cout << endl;
    titan=titan+22;
    titan.display(std::cout);
    cout << endl;
 */
    
 
     //Testing of SuperHero
     int powers[] = {2, 44, 20, -3};
     SuperHero hercules(powers, 4, "Hercules", 400);
     hercules.display(std::cout);
 
}
