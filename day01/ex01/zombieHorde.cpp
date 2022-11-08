/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:37:00 by fardath           #+#    #+#             */
/*   Updated: 2022/11/07 15:15:35 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	std::string n = "0";
	Zombie *zombieHorde = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		zombieHorde[i].zombie_name(name.append(n));
		n+=1;
	}
	return zombieHorde;
}