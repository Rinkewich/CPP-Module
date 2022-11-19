/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:36:56 by fardath           #+#    #+#             */
/*   Updated: 2022/11/19 20:14:51 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) 
{
	ClapTrap Mike("Mike");
	Mike.attack("Jo");
	Mike.takeDamage(2);
	Mike.beRepaired(1);
	ClapTrap Ivan(Mike);
	for (int i = 0; i < 9; i++)
		Mike.attack("Jo");
	Mike.beRepaired(1);
	for (int i = 0; i < 5; i++)
		Mike.takeDamage(2);
	for (int i = 0; i < 9; i++)
		Ivan.attack("Jo");
	return (0);
}