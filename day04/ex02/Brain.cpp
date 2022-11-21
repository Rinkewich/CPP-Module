/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:07:07 by fardath           #+#    #+#             */
/*   Updated: 2022/11/21 17:15:21 by fardath          ###   ########.fr       */
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
        this->ideas[i] = other.ideas[i];
    
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
        this->ideas[i] = rhs.ideas[i];
    return (*this);
}

std::string const	&Brain::getIdea(int const &index) const
{
	if (index >= 0 && index < 100)
		return (this->ideas[index]);
	return (this->ideas[0]);
}
void	Brain::setIdea(std::string const &idea, int const &index)
{
	if (index >= 0 && index < 100)
		this->ideas[index] = idea;
}