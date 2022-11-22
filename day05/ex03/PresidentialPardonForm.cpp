/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:35:04 by fardath           #+#    #+#             */
/*   Updated: 2022/11/22 15:00:28 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "Classic PresidentialPardonForm constructor\n";
	this->_target = "Defoult";
	
}
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor\n";
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm constructor whit param\n";
	this->_target = target;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) : AForm(other)
{
	std::cout << "PresidentialPardonForm copy constructor called\n";
	this->_target = other.getTarget();
}
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	std::cout << "PresidentialPardonForm assigment copy called." << std::endl;
	if (this == &other)
		return (*this);
	this->_target = other.getTarget();
	return (*this);
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getGradeSing())
		throw AForm::IsNotSignedFormException();
	if (this->getGradeExecute() < executor.getGrade())
		throw AForm::GradeTooLowException();
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" <<
	std::endl;
}
std::string PresidentialPardonForm::getTarget(void) const
{
	return this->_target;
}