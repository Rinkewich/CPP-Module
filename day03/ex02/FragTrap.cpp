/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:01:19 by fardath           #+#    #+#             */
/*   Updated: 2022/11/19 21:10:40 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string _name) 
{
	std::cout << "FragTrap constructor called\n";
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	this->_name = _name;
}

FragTrap::FragTrap(FragTrap const &other)
{
	std::cout << "FragTrap copy constructor called\n";
	this->_name = other._name;
	this->attack_damage = other.attack_damage;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}


FragTrap &FragTrap::operator=(FragTrap const &other)
{
	std::cout << "FragTrap copy operator called\n";
	this->_name = other._name;
	this->attack_damage = other.attack_damage;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	return (*this);	
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Give five to " << this->_name << std::endl;
}