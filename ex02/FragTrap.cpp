#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "FragTrap default constructor called with " <<_hit_points << " hit points, " <<_energy_points << " energy points, and " << _attack_damage << " attack damage" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy) {
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name){
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "FragTrap " << name << " constructor called with " <<_hit_points << " hit points, " <<_energy_points << " energy points, and " << _attack_damage << " attack damage" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src) {
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &src) {
		_name = src._name;
		_hit_points = src._hit_points;
		_energy_points = src._energy_points;
		_attack_damage = src._attack_damage;
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor for " << _name << " called" << std::endl;
}

void    FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << _name << " wants a high five" << std::endl;
}