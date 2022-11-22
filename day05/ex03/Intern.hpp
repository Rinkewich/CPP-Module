/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:46:04 by fardath           #+#    #+#             */
/*   Updated: 2022/11/22 14:47:22 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

public:
	Intern();
	Intern(const Intern & copy);
	~Intern();
	Intern & operator=(const Intern & copy);

	AForm * makeForm(std::string nameForm, std::string targetForm);
	class UnknownFormException : public std::exception {
		virtual const char* what() const throw();
	};
};

#endif