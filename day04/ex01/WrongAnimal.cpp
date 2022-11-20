/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:57:03 by fardath           #+#    #+#             */
/*   Updated: 2022/11/20 20:00:16 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "Classic WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
	this->type = other.getType();
}
WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other)
{
	this->type = other.getType();
	return (*this);
}
std::string WrongAnimal::getType(void) const
{
	return this->type;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "Classic WrongAnimal destructor called\n";
}
void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal's sound....\n";
}
/*************/
WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "Classic WrongCat constructor called\n";
}

WrongCat::WrongCat(WrongCat const &other)
{
	std::cout << "Copy WrongCat constructor called\n";
	this->type = other.getType();
}
WrongCat &WrongCat::operator=(WrongCat const &other)
{
	this->type = other.getType();
	return (*this);
}
WrongCat::~WrongCat()
{
	std::cout << "Classic WrongCat destructor called\n";
}
void WrongCat::makeSound(void) const
{
	std::cout << "Wrong Meu\n";
}