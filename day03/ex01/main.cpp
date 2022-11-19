/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:36:56 by fardath           #+#    #+#             */
/*   Updated: 2022/11/19 20:56:14 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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
	std::cout << "===========================================\n";
	ScavTrap Vera("Vera");
	Vera.attack("Jo");
	Vera.takeDamage(2);
	Vera.beRepaired(1);
	ScavTrap Vera2(Vera);
	for (int i = 0; i < 9; i++)
		Vera.attack("Jo");
	Vera.beRepaired(1);
	for (int i = 0; i < 5; i++)
		Vera.takeDamage(20);
	for (int i = 0; i < 9; i++)
		Vera2.attack("Jo");
	Vera.guardGate();
	return (0);
}