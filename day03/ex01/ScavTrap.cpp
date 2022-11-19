/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 20:19:42 by fardath           #+#    #+#             */
/*   Updated: 2022/11/19 20:44:16 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "ScavTrap constructor called\n";
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	this->gateMode = false;
}

ScavTrap::ScavTrap(ScavTrap const &other)
{
	std::cout << "ScavTrap copy constructor called\n";
	this->_name = other._name;
	this->attack_damage = other.attack_damage;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->gateMode = other.gateMode;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}


ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
	std::cout << "ScavTrap copy operator called\n";
	this->_name = other._name;
	this->attack_damage = other.attack_damage;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->gateMode = other.gateMode;
	return (*this);	
}
void ScavTrap::guardGate()
{
    std::cout << "Change gate state to ";
    if (this->gateMode)
    {
        this->gateMode = false;
        std::cout <<"Inactive" << std::endl;
        return ;
    }
    this->gateMode = true;
    std::cout <<"Active" << std::endl;
}