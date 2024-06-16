#include "ScavTrap.hpp"

int main() {
    // Test default constructor
    ScavTrap scav1;
    std::cout << std::endl;

    // Test parameterized constructor
    ScavTrap scav2("Scavvy");
    std::cout << std::endl;

    // Test copy constructor
    ScavTrap scav3(scav2);
    std::cout << std::endl;

    // Test copy assignment operator
    ScavTrap scav4;
    scav4 = scav2;
    std::cout << std::endl;

    // Test attack method
    scav2.attack("Target1");
    scav2.attack("Target2");
    std::cout << std::endl;

    // Test guardGate method
    scav2.guardGate();
    scav2.guardGate();  // Should indicate that it is already guarding
    std::cout << std::endl;

    // Test attacking until energy is depleted
    for (int i = 0; i < 51; ++i) {
        scav2.attack("Dummy");
    }
    std::cout << std::endl;

    // Destructor will be called automatically for all objects
    return 0;
}
