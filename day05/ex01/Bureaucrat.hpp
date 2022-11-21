/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:30:05 by fardath           #+#    #+#             */
/*   Updated: 2022/11/21 21:07:34 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Bureaucrat
{
	private:
		std::string name;
		int range;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int range);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &other);
		Bureaucrat const &operator=(Bureaucrat const &other);
		std::string	getName(void) const;
		int			getGrade(void) const;
		void	gradeUp(void);
		void	gradeDown(void);
		class GradeTooHighException : public std::exception
		{
			public:
				virtual char const	*what(void) const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual char const	*what(void) const throw();
		};
		void signForm(Form & target);
};
std::ostream& operator<<(std::ostream &os, Bureaucrat const &instance);
#endif