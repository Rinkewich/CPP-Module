/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 20:19:24 by fardath           #+#    #+#             */
/*   Updated: 2022/11/21 21:09:45 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string name;
		bool isSigned;
		int gradeSing;
		int gradeExecute;
	public:
		Form();
		Form(std::string name, int gradeSing, int gradeExecute);
		~Form();
		Form(Form const &other);
		Form &operator=(Form const &other);
		
		std::string getName() const;
		bool getIsSigned() const;
		int getGradeSing() const;
		int getGradeExecute() const;
		
		void beSigned(Bureaucrat & Bureaucrat);
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
};
std::ostream& operator<<(std::ostream &os, Form const &instance);
#endif