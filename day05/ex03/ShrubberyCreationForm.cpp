/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:18:23 by fardath           #+#    #+#             */
/*   Updated: 2022/11/22 15:01:08 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "Classic ShrubberyCreationForm constructor\n";
	this->_target = "Defoult";
	
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor\n";
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm constructor whit param\n";
	this->_target = target;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : AForm(other)
{
	std::cout << "ShrubberyCreationForm copy constructor called\n";
	this->_target = other.getTarget();
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	std::cout << "Assignment operator assigment called." << std::endl;
	if (this == &other)
		return (*this);
	this->_target = other.getTarget();
	return (*this);
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string three = "\t\t____________ 111_______1111\n \
		__________1111111111__111111\n \
		_________ 11____1111__11__111\n \
		_________1111111___11111____11111111111111\n \
		________11__111_____111________1_1____11111\n \
		________11_________________11111___11111__1\n \
		________11__________________1111___1111___1\n \
		______1__ 1_________________111___________11\n \
		_____11_111_______________________________111\n \
		_111111111_________1____________________1__11\n \
		1111___11______11111______1_111_________1111111\n \
		11_______________11_______1111______________1111\n \
		111________________________11_________________11\n \
		_111 _________________11__________________1____11\n \
		__11 _____1________11111_______________11111___11\n \
		__11 __1111_________1111________________1111____11\n \
		_11___11111______________________________11_____11\n \
		111_____11_____111_111111_1111_111___11________111\n \
		11 ______________1_1___11__1_1_11111111_______1111\n \
		111_____11111111___11___1_111_11_11111______1111\n \
		_11111111111111111__11__1_11111____11111111111\n \
		___1111________11111_1111___11______11111111\n \
		_________________111__111_111\n \
		__________________11______11\n \
		__________________11__11__1111111111\n \
		______________ 11111_1111_1111_11111111\n \
		__________111111111__11___1________1111111111\n \
		__111111111111 ___11__1___1____________1111111111\n \
		1111111111_______111______1______________________\n \
		________________ 11_______11_____________________\n \
		________________11________111____________________\n \
		______________111__1111__11_1J1__________________\n \
		______________11__11__11__1__1K1________________\n \
		____________ 11__11____11_1___11_________________\n";
		if (!this->getIsSigned())
			throw AForm::IsNotSignedFormException();
		if (this->getGradeExecute() < executor.getGrade())
			throw AForm::GradeTooLowException();

		std::string filename = _target + "_shrubbery";
		std::ofstream file(filename.c_str());
		if (file.is_open()) {
			file << three;
			file.close();
	}
	else
		std::cerr << "Error opening file" << std::endl;
}
std::string ShrubberyCreationForm::getTarget(void) const
{
	return this->_target;
}