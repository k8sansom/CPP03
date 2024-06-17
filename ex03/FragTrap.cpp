#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(), _highFive(false) {
    _health = 100;
    _energy = 100;
    _damage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy) {
    _highFive = copy._highFive;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name), _highFive(false) {
    _health = 100;
    _energy = 100;
    _damage = 30;
    std::cout << "FragTrap " << name << " constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src) {
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &src) {
		_name = src._name;
		_health = src._health;
		_energy = src._energy;
		_damage = src._damage;
		_highFive = src._highFive;
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor for " << _name << " called" << std::endl;
}

void    FragTrap::highFivesGuys() {
	if (_highFive == false) {
		_highFive = true;
		std::cout << "FragTrap " << _name << " wants a high five" << std::endl;
	}
	else
		std::cout << "FragTrap " << _name << " is already requesting a high five" << std::endl;
}