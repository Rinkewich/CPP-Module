/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:44:31 by fardath           #+#    #+#             */
/*   Updated: 2022/11/08 18:33:26 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {}

HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
void HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon->GetType() << std::endl;
}