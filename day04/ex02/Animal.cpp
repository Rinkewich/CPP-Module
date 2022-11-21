/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:42:15 by fardath           #+#    #+#             */
/*   Updated: 2022/11/21 17:22:30 by fardath          ###   ########.fr       */
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
	std::cout << "Copy Animal constructor called\n";
	this->type = other.getType();
}
Animal &Animal::operator=(Animal const &other)
{
	std::cout << "Assignment operator for Animal called." << std::endl;
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
	this->brainzzz = new Brain();
	std::cout << "Classic Cat constructor called\n";
}

Cat::Cat(Cat const &other) :Animal(other)
{
	std::cout << "Copy Cat constructor called\n";
	this->brainzzz = new Brain();
	this->type = other.getType();
}
Cat &Cat::operator=(Cat const &other)
{
	Animal::operator=(other);
	std::cout << "Assignment operator for Cat called." << std::endl;
	if (this != &other)
    {
        delete brainzzz;
        this->brainzzz = new Brain(*other.getBrain());
    }
	return (*this);
}
Cat::~Cat()
{
	std::cout << "Classic Cat destructor called\n";
	delete this->brainzzz;
}
void Cat::makeSound(void) const
{
	std::cout << "Meu\n";
}
/***********/
Dog::Dog()
{
	this->type = "Dog";
	this->brainzzz = new Brain();
	std::cout << "Classic Dog constructor called\n";
}

Dog::Dog(Dog const &other):Animal(other)
{
	std::cout << "Copy Dog constructor called\n";
	this->brainzzz = new Brain();
	this->type = other.getType();
}
Dog &Dog::operator=(Dog const &other)
{
	Animal::operator=(other);
	std::cout << "Assignment operator for Dog called." << std::endl;
	if (this != &other)
    {
        delete this->brainzzz;
        this->brainzzz = new Brain(*other.getBrain());
    }
	return (*this);
}
Dog::~Dog()
{
	std::cout << "Classic Dog destructor called\n";
	delete this->brainzzz;
}
void Dog::makeSound(void) const
{
	std::cout << "Bark\n";
}


Brain *Cat::getBrain(void) const
{
    return (this->brainzzz);
}

Brain *Dog::getBrain(void) const
{
    return (this->brainzzz);
}