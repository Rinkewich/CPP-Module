/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 20:19:33 by fardath           #+#    #+#             */
/*   Updated: 2022/11/21 21:14:04 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Form::Form()
{
	std::cout << "Classic Form constructor\n";
	this->name = "Default";
	this->gradeExecute = 150;
	this->gradeSing = 150;
	this->isSigned = false;
}
Form::Form(std::string name, int gradeSing, int gradeExecute)
{
	std::cout << "Form constructor whit param\n";
	this->name = name;
	this->gradeExecute = gradeExecute;
	this->gradeSing = gradeSing;
	this->isSigned = false;
	if (gradeSing < 1 || gradeExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeSing > 150 || gradeExecute > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
	std::cout << "Form destructor\n";
}
Form::Form(Form const &other)
{
	this->name = other.getName();
	this->gradeExecute = other.getGradeExecute();
	this->gradeSing = other.getGradeSing();
	this->isSigned = other.getIsSigned();
}
Form &Form::operator=(Form const &other)
{
	this->name = other.getName();
	this->gradeExecute = other.getGradeExecute();
	this->gradeSing = other.getGradeSing();
	this->isSigned = other.getIsSigned();
	return (*this);
}
std::string Form::getName() const
{
	return this->name;
}
bool Form::getIsSigned() const
{
	return this->isSigned;
}
int Form::getGradeSing() const
{
	return this->gradeSing;
}
int Form::getGradeExecute() const
{
	return this->gradeExecute;
}

void Form::beSigned(Bureaucrat & Bureaucrat)
{
	if (this->gradeSing < Bureaucrat.getGrade())
		throw Form::GradeTooLowException();
	this->isSigned = true;
}
char const	*Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
};
char const	*Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
};

std::ostream& operator<<(std::ostream &os, Form const &instance)
{
	
	return os << "Form: " << instance.getName() << ", isSigned: " << instance.getIsSigned()
			   << ", gradeToSign: " << instance.getGradeSing()
			   << ", gradeToExecute: " << instance.getGradeExecute();
}