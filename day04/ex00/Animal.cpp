/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:42:15 by fardath           #+#    #+#             */
/*   Updated: 2022/11/20 19:54:55 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Classic Animal constructor called\n";
}

Animal::Animal(Animal const &other)
{
	this->type = other.getType();
}
Animal &Animal::operator=(Animal const &other)
{
	this->type = other.getType();
	return (*this);
}
std::string Animal::getType(void) const
{
	return this->type;
}
Animal::~Animal()
{
	std::cout << "Classic Animal destructor called\n";
}
void Animal::makeSound(void) const
{
	std::cout << "Animal's sound....\n";
}
/*************/
Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Classic Cat constructor called\n";
}

Cat::Cat(Cat const &other)
{
	std::cout << "Copy Cat constructor called\n";
	this->type = other.getType();
}
Cat &Cat::operator=(Cat const &other)
{
	this->type = other.getType();
	return (*this);
}
Cat::~Cat()
{
	std::cout << "Classic Cat destructor called\n";
}
void Cat::makeSound(void) const
{
	std::cout << "Meu\n";
}
/***********/
Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Classic Dog constructor called\n";
}

Dog::Dog(Dog const &other)
{
	std::cout << "Copy Dog constructor called\n";
	this->type = other.getType();
}
Dog &Dog::operator=(Dog const &other)
{
	this->type = other.getType();
	return (*this);
}
Dog::~Dog()
{
	std::cout << "Classic Dog destructor called\n";
}
void Dog::makeSound(void) const
{
	std::cout << "Bark\n";
}