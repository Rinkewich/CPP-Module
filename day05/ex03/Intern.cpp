/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:46:10 by fardath           #+#    #+#             */
/*   Updated: 2022/11/22 14:56:22 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {std::cout << "Classic Intern constructor\n";}
Intern::Intern(const Intern & copy){std::cout << "Intern copy constructor\n"; *this = copy; }
Intern::~Intern() {	std::cout << "Intern destructor\n"; }
Intern & Intern::operator=(const Intern & copy)
{
	if (this == &copy)
		return *this;
	std::cout << "Copy Intern assignment operator called" << std::endl;
	return *this;
}
static AForm * getSCF(std::string target) {return new ShrubberyCreationForm
(target);}
static AForm * getRRF(std::string target) {return new RobotomyRequestForm
(target);}
static AForm * getPPF(std::string target) {return new PresidentialPardonForm
(target);}
AForm * Intern::makeForm(std::string nameForm, std::string targetForm)
{
	AForm * (*funcs[3])(std::string) = {getSCF, getRRF, getPPF};
	std::string names[3] = {"ShrubberyCreation","RobotomyRequest", "PresidentialPardon"};
	for(int i = 0; i < 3; i++)
		if (nameForm == names[i])
		{
			std::cout << "Intern create "<< nameForm << std::endl;
			return funcs[i](targetForm);
		}
	throw Intern::UnknownFormException();
}
const char* Intern::UnknownFormException::what() const throw()
{
 return ("unknown form");
}