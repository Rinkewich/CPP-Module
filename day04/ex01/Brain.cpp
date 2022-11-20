/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:07:07 by fardath           #+#    #+#             */
/*   Updated: 2022/11/20 20:10:45 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Classic Brain constructor called\n";
}

Brain::Brain(Brain const & other)
{
    for (size_t i = 0; i < 100; i++)
        this->idias[i] = other.idias[i];
    
   std::cout << "Copy Brain constructor called\n";
    *this = other;
}

Brain::~Brain()
{
    std::cout << "Classic Brain destructor called\n";
}

Brain & Brain::operator=(Brain const &rhs)
{
    for (size_t i = 0; i < 100; i++)
        this->idias[i] = rhs.idias[i];
    return (*this);
}