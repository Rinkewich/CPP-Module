/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:18:23 by fardath           #+#    #+#             */
/*   Updated: 2022/11/22 15:00:53 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "Classic RobotomyRequestForm constructor\n";
	this->_target = "Defoult";
	
}
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor\n";
}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "ShrubberyCreationForm constructor whit param\n";
	this->_target = target;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : AForm(other)
{
	std::cout << "RobotomyRequestForm copy constructor called\n";
	this->_target = other.getTarget();
}
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	std::cout << "RobotomyRequestForm operator assigment called." << std::endl;
	if (this == &other)
		return (*this);
	this->_target = other.getTarget();
	return (*this);
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getGradeSing())
		throw AForm::IsNotSignedFormException();
	if (this->getGradeExecute() < executor.getGrade())
		throw AForm::GradeTooLowException();
	std::cout << "Bzzz..." << std::endl;
	std::cout << "Bzzz... Bzzz..." << std::endl;
	std::cout << "Bzzz... Bzzzz... Bzzz..." << std::endl;
	srand(time(NULL));
	if (rand() % 2)
		std::cout << _target << " has been robotomized succesfully" <<
		std::endl;
	else
		std::cout << "robotomy failed" << std::endl;
}
std::string RobotomyRequestForm::getTarget(void) const
{
	return this->_target;
}