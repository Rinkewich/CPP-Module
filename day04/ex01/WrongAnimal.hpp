/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:56:40 by fardath           #+#    #+#             */
/*   Updated: 2022/11/20 20:00:50 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &other);
		virtual ~WrongAnimal();
		void makeSound(void) const;
		std::string getType(void) const;
		WrongAnimal &operator=(WrongAnimal const &other);
};

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const & other);
		~WrongCat();
		WrongCat &operator=(WrongCat const &rhs);	
		void makeSound(void) const;
};
#endif