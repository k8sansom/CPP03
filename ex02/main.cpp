#include "FragTrap.hpp"

int main() {
  // Test FragTrap default constructor
    std::cout << "Creating FragTrap frag1 (default constructor):" << std::endl;
    FragTrap frag1;
    std::cout << std::endl;

    // Test FragTrap parameterized constructor
    std::cout << "Creating FragTrap frag2 (parameterized constructor):" << std::endl;
    FragTrap frag2("Fraggy");
    std::cout << std::endl;

    // Test FragTrap copy constructor
    std::cout << "Creating FragTrap frag3 (copy constructor):" << std::endl;
    FragTrap frag3(frag2);
    std::cout << std::endl;

    // Test FragTrap copy assignment operator
    std::cout << "Assigning frag2 to frag4 (copy assignment operator):" << std::endl;
    FragTrap frag4;
    frag4 = frag2;
    std::cout << std::endl;

    // Test FragTrap attack method
    std::cout << "Testing FragTrap attack method:" << std::endl;
    frag2.attack("Target3");
    frag2.attack("Target4");
    std::cout << std::endl;

    // Test FragTrap highFivesGuys method
    std::cout << "Testing FragTrap highFivesGuys method:" << std::endl;
    frag2.highFivesGuys();
    frag2.highFivesGuys();  // Should indicate that it is already requesting
    std::cout << std::endl;

    // Destructors will be called automatically for all objects
    return 0;
}
