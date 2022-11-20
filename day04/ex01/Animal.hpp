/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:42:49 by fardath           #+#    #+#             */
/*   Updated: 2022/11/20 20:29:10 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"
class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal const &other);
		virtual ~Animal();
		virtual void makeSound(void) const;
		std::string getType(void) const;
		Animal &operator=(Animal const &other);
};

class Cat : public Animal
{
	private:
		Brain *brainzzz;
	public:
		Cat();
		Cat(Cat const & other);
		~Cat();
		Cat &operator=(Cat const &other);	
		void makeSound(void) const;
		Brain *getBrain(void) const;
};
class Dog: public Animal
{
	private:
		Brain *brainzzz;
	public:
		Dog();
		Dog(Dog const & other);
		~Dog();
		Dog &operator=(Dog const &other);
		void makeSound(void) const;
		Brain *getBrain(void) const;
};
#endif