/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:45:08 by fardath           #+#    #+#             */
/*   Updated: 2022/11/08 17:46:43 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) : _weapon(weapon)
{
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string weapon)
{
	this->_weapon = weapon;
}

const std::string& Weapon::GetType()
{
	return(this->_weapon);
}