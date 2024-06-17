#include "DiamondTrap.hpp"

int main() {
    std::cout << "Creating DiamondTrap default instance" << std::endl;
    DiamondTrap defaultTrap;
    std::cout << std::endl;

    std::cout << "Creating DiamondTrap named instance 'Diamond'" << std::endl;
    DiamondTrap namedTrap("Diamond");
    std::cout << std::endl;

    std::cout << "Copy constructing DiamondTrap from namedTrap" << std::endl;
    DiamondTrap copiedTrap(namedTrap);
    std::cout << std::endl;

    std::cout << "Assigning defaultTrap to namedTrap" << std::endl;
    defaultTrap = namedTrap;
    std::cout << std::endl;

    std::cout << "Testing attack method on namedTrap" << std::endl;
    namedTrap.attack("target");
    std::cout << std::endl;

    std::cout << "Testing whoAmI method on namedTrap" << std::endl;
    namedTrap.whoAmI();
    std::cout << std::endl;

    std::cout << "Testing highFivesGuys method on namedTrap" << std::endl;
    namedTrap.highFivesGuys();
    std::cout << std::endl;

    std::cout << "Testing guardGate method on namedTrap" << std::endl;
    namedTrap.guardGate();
    std::cout << std::endl;

    std::cout << "Exiting main, destructors will be called" << std::endl;
    return 0;
}
