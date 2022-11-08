/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:37:21 by fardath           #+#    #+#             */
/*   Updated: 2022/11/07 15:07:09 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string.h>
class Zombie
{
	public:
		Zombie();
		~Zombie(void);
		void	announcement(void);
		void zombie_name(std::string name);
	private:
		std::string name;
	
		
};
Zombie* zombieHorde(int N, std::string name);
#endif