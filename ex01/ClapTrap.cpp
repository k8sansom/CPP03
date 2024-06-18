/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksansom <ksansom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:17:58 by ksansom           #+#    #+#             */
/*   Updated: 2024/06/18 11:22:55 by ksansom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("default"),  _health(10), _energy(10), _damage(0) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
	if (this != &src) {
		_name = src._name;
		_health = src._health;
		_energy = src._energy;
		_damage = src._damage;
	}
	std::cout << "ClapTrap copy assignment operator called for " << _name << std::endl;
	return *this;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _health(10), _energy(10), _damage(0) {
	std::cout << "ClapTrap name constructor for " << name << " called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor for " << _name << " called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (_energy > 0 && _health > 0) {
		std::cout << "ClapTrap " <<_name << " attacks " << target << ", causing " <<_damage << " points of damage" << std::endl;
		_energy--;
	}
	else if (_energy == 0)
		std::cout << "ClapTrap " << _name << " can't attack " << target << " because they have no energy" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " can't attack " << target << " because they have no health" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_health >= amount){
		std::cout << "ClapTrap " << _name << " has sustained " << amount << " points of damage" << std::endl;
		_health -= amount;
	}
	else if (_health > 0){
		std::cout << "ClapTrap " << _name << " has taken all the damage they can" << std::endl;
		_health = 0;
	}
	else
		std::cout << "ClapTrap " << _name << " can't take any more damage" << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount) {
	if ( _energy > 0 && _health > 0) {
		std::cout << "ClapTrap " << _name << " has been repaired "  << amount << " health points" << std::endl;
		_health += amount;
		_energy--;
	}
	else if (_energy == 0)
		std::cout << "ClapTrap " << _name << " can not repair themselves because they have no energy left" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " can not repair themselves because they have no health left" << std::endl;
}