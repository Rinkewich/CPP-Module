/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:43:12 by fardath           #+#    #+#             */
/*   Updated: 2022/11/08 17:58:21 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
HumanA::HumanA(std::string name, Weapon &weapon) : _name(name),_weapon(weapon)
{

}
HumanA::~HumanA(){}
void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon.GetType() << std::endl;
}