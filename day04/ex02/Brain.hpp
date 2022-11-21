/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:07:04 by fardath           #+#    #+#             */
/*   Updated: 2022/11/21 17:06:59 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain 
{
	public:
		Brain();
		Brain(Brain const & other);
		~Brain();
		Brain &operator=(Brain const &rhs);
        std::string ideas[100];
		std::string const	&getIdea(int const &index) const;
		void	setIdea(std::string const &idea, int const &index);
};


#endif