/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:07:04 by fardath           #+#    #+#             */
/*   Updated: 2022/11/20 20:32:08 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include "Animal.hpp"
class Brain 
{
	public:
		Brain();
		Brain(Brain const & other);
		~Brain();
		Brain &operator=(Brain const &rhs);
        std::string idias[100];
};


#endif