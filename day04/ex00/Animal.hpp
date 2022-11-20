/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:42:49 by fardath           #+#    #+#             */
/*   Updated: 2022/11/20 19:51:51 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

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
	public:
		Cat();
		Cat(Cat const & other);
		~Cat();
		Cat &operator=(Cat const &rhs);	
		void makeSound(void) const;
};
class Dog: public Animal
{
	public:
		Dog();
		Dog(Dog const & other);
		~Dog();
		Dog &operator=(Dog const &rhs);
		void makeSound(void) const;
};
#endif