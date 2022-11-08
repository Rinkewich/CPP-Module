/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:37:47 by fardath           #+#    #+#             */
/*   Updated: 2022/11/07 15:10:21 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie::Zombie()
{
}

Zombie::~Zombie(void)
{
	std::cout << "/sounds of "<< this->name <<"'s death....*_*/\n";
}
void Zombie::announcement(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}
void Zombie::zombie_name(std::string name)
{
	this->name = name;
}