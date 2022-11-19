/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:04:12 by fardath           #+#    #+#             */
/*   Updated: 2022/11/19 21:13:48 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Classic constructor called" << std::endl;
    this->_name = "defaultName";
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	std::cout << "ClapTrap constructor called\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap desrtuctor called\n"; 
}
void ClapTrap::attack(const std::string& target)
{
	if(this->energy_points > 0 && hit_points > 0)
	{
		this->energy_points -= 1;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!\n";
	}
	else
		std::cout << "ClapTrap " << this->_name << " doesn't have energy or live to attack\n";
}
void ClapTrap::takeDamage(unsigned int amount)
{
	this->hit_points -= amount;
	std::cout << "ClapTrap " << this->_name << " take damage " << amount << std::endl;
	if (this->hit_points <= 0)
		std::cout << "ClapTpap " << this->_name << " dead\n";
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->energy_points > 0 && this->hit_points > 0)
	{
		this->energy_points -= 1;
		std::cout << "ClapTrap " << this->_name << " repaired himself with " << amount << " points of life\n";
		this->hit_points += amount;
	}
	else
		std::cout << "ClapTrap " << this->_name << " doesn't have energy or life to repaire\n";
}
ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	std::cout << "Operator = called\n";
	this->_name = other.getName();
	this->hit_points = other.getHitPoints();
	this->energy_points = other.getEnergyPoints();
	this->attack_damage = other.getAttackDamage();
	return(*this);
}
ClapTrap::ClapTrap(ClapTrap const &other)
{
	std::cout << "Copy consrtructor called\n";
	this->_name = other.getName();
	this->hit_points = other.getHitPoints();
	this->energy_points = other.getEnergyPoints();
	this->attack_damage = other.getAttackDamage();
}
std::string ClapTrap::getName(void) const
{
	return this->_name;
}
int ClapTrap::getHitPoints(void) const
{
	return this->hit_points;
}
int ClapTrap::getEnergyPoints(void) const
{
	return this->energy_points;
}
int ClapTrap::getAttackDamage(void) const
{
	return this->attack_damage;
}