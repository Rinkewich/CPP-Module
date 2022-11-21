/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:42:49 by fardath           #+#    #+#             */
/*   Updated: 2022/11/21 17:27:25 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"
class Brain;
class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal const &other);
		virtual ~Animal();
		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
		Animal &operator=(Animal const &other);
		virtual Brain 		*getBrain(void) const = 0;
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