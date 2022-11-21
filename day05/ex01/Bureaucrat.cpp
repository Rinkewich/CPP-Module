/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:33:31 by fardath           #+#    #+#             */
/*   Updated: 2022/11/21 21:08:59 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Classic Bureaucrat constructor\n";
	this->name = "Default";
	this-> range = 45;
}
Bureaucrat::Bureaucrat(std::string name, int range)
{
	std::cout << "Bureaucrat name and range\n";
	this->name = name;
	if (range < 1)
		throw Bureaucrat::GradeTooHighException ();
	else if (range > 150)	throw Bureaucrat::GradeTooLowException();
	else	this->range = range;
}
Bureaucrat const &Bureaucrat::operator=(Bureaucrat const &other)
{
	std::cout << "Operator= was called" << std::endl;
	this->name = other.getName();
	this->range = other.getGrade();
	return (*this);
}
Bureaucrat::~Bureaucrat()
{
	
};
Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
	std::cout << "Bureaucrat copy constructor called\n";
	this->name = other.getName();
	this->range = other.getGrade();
}
std::string	Bureaucrat::getName(void)const
{
	return this->name;
}
int			Bureaucrat::getGrade(void) const
{
	return this->range;
}
void	Bureaucrat::gradeUp(void)
{
	if (this->range <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->range -=1;
}
void	Bureaucrat::gradeDown(void)
{
	if (this->range >= 150)
		throw Bureaucrat::GradeTooHighException();
	this->range +=1;
}

char const	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
};
char const	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
};

std::ostream& operator<<(std::ostream &os, Bureaucrat const &instance)
{
	os <<instance.getName() <<", bureaucrat grade "<< instance.getGrade() << ".";
	return (os);
}

void Bureaucrat::signForm(Form &target)
{
	try {
		target.beSigned(*this);
		std::cout << name << " signed " << target.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << name << " couldn't sign " << target.getName() <<
		" because " << e.what() << std::endl;
	}
}