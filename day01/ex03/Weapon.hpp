/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:45:23 by fardath           #+#    #+#             */
/*   Updated: 2022/11/08 17:46:20 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string.h>
class Weapon
{
	private:
		std::string _weapon;
	public:
		Weapon(std::string weapon);
		~Weapon();
		const std::string& GetType();
		void setType(std::string weapon); 
};


#endif