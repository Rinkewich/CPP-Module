/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:36:56 by fardath           #+#    #+#             */
/*   Updated: 2022/11/22 14:55:20 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
int main( void ) 
{
	std::cout << " --------------- TEST 1 ---------------" << std::endl;
	{
		Intern		intern;
		Bureaucrat	signer("Signer", 10);
		Bureaucrat	executor("Executor", 5);
		AForm*		anyForm = NULL;

		try {
		anyForm = intern.makeForm("ShrubberyCreation", executor.getName());
		signer.signForm(*anyForm);
		executor.executeForm(*anyForm);
		}
		catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
		}
		if (anyForm)
			delete anyForm;
	}
	std::cout << " --------------- TEST 2 ---------------" << std::endl;
	{
		Intern		intern;
		Bureaucrat	signer("Signer", 10);
		Bureaucrat	executor("Executor", 5);
		AForm*		anyForm = NULL;

		try {
			anyForm = intern.makeForm("WrongForm", executor.getName());
			signer.signForm(*anyForm);
			executor.executeForm(*anyForm);
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
		if (anyForm)
			delete anyForm;
	}

	return 0;
}