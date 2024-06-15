/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksansom <ksansom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:17:58 by ksansom           #+#    #+#             */
/*   Updated: 2024/06/14 14:43:56 by ksansom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("default"),  _health(10), _energy(10), _damage(0) {
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &src) {
		_name = src._name;
		_health = src._health;
		_energy = src._energy;
		_damage = src._damage;
	}
	return *this;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _health(10), _energy(10), _damage(0) {
	std::cout << "ClapTrap Constructor for the name " << name << " called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor for " << _name << " called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (_energy > 0 && _health > 0) {
		std::cout << _name << " attacks " << target << std::endl;
		_energy--;
	}
	else if (_energy == 0)
		std::cout << _name << " can't attack " << target << " because they have no energy" << std::endl;
	else
		std::cout << _name << " can't attack " << target << " because they have no health" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_health >= amount){
		std::cout << _name << " has sustained " << amount << " of damage" << std::endl;
		_health -= amount;
	}
	else if (_health > 0){
		std::cout << _name << " has taken all the damage they can" << std::endl;
		_health = 0;
	}
	else
		std::cout << _name << " can't take any more damage" << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount) {
	if ( _energy > 0 && _health > 0 && _health + amount <= 10) {
		std::cout << _name << " has been repaired" << std::endl;
		_health += amount;
		_energy--;
	}
	else if (_energy == 0)
		std::cout << _name << " can not repair themselves because they have no energy left" << std::endl;
	else if (_health == 0)
		std::cout << _name << " can not repair themselves because they have no health left" << std::endl;
	else
		std::cout << _name << " can not repair themselves that much" << std::endl;	
}