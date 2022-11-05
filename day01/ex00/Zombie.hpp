/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:37:21 by fardath           #+#    #+#             */
/*   Updated: 2022/11/05 20:26:48 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string.h>
class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announcement(void);
	private:
		std::string name;
	
		
};
Zombie* newZombie( std::string name );
void randomChump(std::string name);
#endif