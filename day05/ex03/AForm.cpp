/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 20:19:33 by fardath           #+#    #+#             */
/*   Updated: 2022/11/22 14:59:31 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

AForm::AForm()
{
	std::cout << "Classic AForm constructor\n";
	this->name = "Default";
	this->gradeExecute = 150;
	this->gradeSing = 150;
	this->isSigned = false;
}
AForm::AForm(std::string name, int gradeSing, int gradeExecute)
{
	std::cout << "AForm constructor whit param\n";
	this->name = name;
	this->gradeExecute = gradeExecute;
	this->gradeSing = gradeSing;
	this->isSigned = false;
	if (gradeSing < 1 || gradeExecute < 1)
		throw AForm::GradeTooHighException();
	if (gradeSing > 150 || gradeExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::~AForm()
{
	std::cout << "AForm destructor\n";
}
AForm::AForm(AForm const &other)
{
	std::cout << "AForm copy constructor\n";
	this->name = other.getName();
	this->gradeExecute = other.getGradeExecute();
	this->gradeSing = other.getGradeSing();
	this->isSigned = other.getIsSigned();
}
AForm &AForm::operator=(AForm const &other)
{
	std::cout << "AForm copy assigment constructor\n";
	this->name = other.getName();
	this->gradeExecute = other.getGradeExecute();
	this->gradeSing = other.getGradeSing();
	this->isSigned = other.getIsSigned();
	return (*this);
}
std::string AForm::getName() const
{
	return this->name;
}
bool AForm::getIsSigned() const
{
	return this->isSigned;
}
int AForm::getGradeSing() const
{
	return this->gradeSing;
}
int AForm::getGradeExecute() const
{
	return this->gradeExecute;
}

void AForm::beSigned(Bureaucrat & Bureaucrat)
{
	if (this->gradeSing < Bureaucrat.getGrade())
		throw AForm::GradeTooLowException();
	this->isSigned = true;
}
char const	*AForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
};
char const	*AForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
};
char const	*AForm::IsNotSignedFormException::what(void) const throw()
{
	return ("The Form is not signed");
};

std::ostream& operator<<(std::ostream &os, AForm const &instance)
{
	return os << "Form: " << instance.getName() << ", isSigned: " << instance.getIsSigned()
			   << ", gradeToSign: " << instance.getGradeSing()
			   << ", gradeToExecute: " << instance.getGradeExecute();
}