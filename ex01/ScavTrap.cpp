#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(), _guardGate(false) {
    _health = 100;
    _energy = 50;
    _damage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy) {
    _guardGate = copy._guardGate;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name), _guardGate(false) {
    _health = 100;
    _energy = 50;
    _damage = 20;
    std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &src) {
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &src) {
		_name = src._name;
		_health = src._health;
		_energy = src._energy;
		_damage = src._damage;
		_guardGate = src._guardGate;
	}
	return *this;
}
ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor for " << _name << " called" << std::endl;
}

void    ScavTrap::attack(const std::string &target) {
	if (_energy > 0 && _health > 0) {
		std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _damage << " damage" << std::endl;
		_energy--;
	}
	else if (_energy <= 0)
		std::cout << "ScavTrap " << _name << " can't attack because they don't have energy" << std::endl;
	else
		std::cout << "ScavTrap " << _name << " can't attack because they have no health" << std::endl;
}

void    ScavTrap::guardGate() {
	if (_guardGate == false) {
		_guardGate = true;
		std::cout << "ScavTrap " << _name << " is guarding the gate" << std::endl;
	}
	else
		std::cout << "ScavTrap " << _name << " is already guarding the gate" << std::endl;
}