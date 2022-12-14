/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 20:19:34 by fardath           #+#    #+#             */
/*   Updated: 2022/11/20 16:53:18 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	protected:
		bool gateMode;
	public: 
		ScavTrap(std::string _name);
		ScavTrap(ScavTrap const &other);
		~ScavTrap();
		void attack(const std::string& target);
    	ScavTrap &operator=(ScavTrap const &other);
		void guardGate();
};
#endif