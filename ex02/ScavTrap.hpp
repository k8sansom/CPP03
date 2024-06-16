#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(const ScavTrap &copy);
        ScavTrap(std::string name);
        ScavTrap &operator=(const ScavTrap &src);
        virtual	~ScavTrap();

        void    attack(const std::string &target);
        void    guardGate();

    private:
        bool    _guardGate;
};

# endif