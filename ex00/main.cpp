#include "ClapTrap.hpp"

int main() {
    // Creating ClapTrap instances
    ClapTrap defaultClapTrap;
    ClapTrap namedClapTrap("Clappy");

    // Test attack method
    std::cout << "\n--- Testing Attack Method ---" << std::endl;
    namedClapTrap.attack("Target A");
    namedClapTrap.attack("Target B");

    // Test takeDamage method
    std::cout << "\n--- Testing Take Damage Method ---" << std::endl;
    namedClapTrap.takeDamage(5);
    namedClapTrap.takeDamage(3); // This should bring health to 0

    // Test beRepaired method
    std::cout << "\n--- Testing Be Repaired Method ---" << std::endl;
    namedClapTrap.beRepaired(3);
    namedClapTrap.beRepaired(5); // Should not repair more than max health

    // Test energy depletion
    std::cout << "\n--- Testing Energy Depletion ---" << std::endl;
    for (int i = 0; i < 12; ++i) {
        namedClapTrap.attack("Target C");
    }

    // Test copying behavior
    std::cout << "\n--- Testing Copy Constructor ---" << std::endl;
    ClapTrap copyClapTrap(namedClapTrap);

    std::cout << "\n--- Testing Copy Assignment Operator ---" << std::endl;
    ClapTrap assignedClapTrap = defaultClapTrap;
    assignedClapTrap = namedClapTrap;

    // Destructor will be called automatically at the end of main
    return 0;
}
