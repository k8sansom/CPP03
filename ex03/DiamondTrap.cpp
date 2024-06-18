#include "DiamondTrap.hpp"

// Default constructor
DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name") {
    this->_name = "default_Diamond";
    this->_hit_points = FragTrap::_hit_points;
	this->_attack_damage = FragTrap::_attack_damage;
    this->_energy_points = FragTrap::_energy_points;
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

// Parameterized constructor
DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name"), _name(name) {
    this->_hit_points = FragTrap::_hit_points;
    this->_attack_damage = FragTrap::_attack_damage;
    this->_energy_points = FragTrap::_energy_points;
    std::cout << "DiamondTrap " << _name << " constructor called" << std::endl;
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy), _name(copy._name) {
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

// Copy assignment operator
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src) {
    std::cout << "DiamondTrap copy assignment operator called" << std::endl;
    if (this != &src) {
        ClapTrap::operator=(src);
        ScavTrap::operator=(src);
        FragTrap::operator=(src);
        this->_name = src._name;
        this->_hit_points = src._hit_points;
        this->_energy_points = src._energy_points;
        this->_attack_damage = src._attack_damage;
    }
    return *this;
}

// Destructor
DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor for " << _name << " called" << std::endl;
}

// Attack method
void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}

// WhoAmI method
void DiamondTrap::whoAmI() {
    std::cout << "My DiamondTrap name is " << _name << ", but my ClapTrap name is " << ClapTrap::_name << std::endl;
}
