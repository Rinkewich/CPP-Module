/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:36:56 by fardath           #+#    #+#             */
/*   Updated: 2022/11/07 14:43:18 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	/*first zombir*/
	Zombie Zombie1("Deril");
	Zombie1.announcement();
	/*second zombie*/
	Zombie *Zombie2 = newZombie("Rick");
	Zombie2->announcement();
	delete Zombie2;
	/*third zombie*/
	randomChump("Caroll");
	return (0);
}
