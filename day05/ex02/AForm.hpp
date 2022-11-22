/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 20:19:24 by fardath           #+#    #+#             */
/*   Updated: 2022/11/22 14:57:29 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string name;
		bool isSigned;
		int gradeSing;
		int gradeExecute;
	public:
		AForm();
		AForm(std::string name, int gradeSing, int gradeExecute);
		virtual ~AForm();
		AForm(AForm const &other);
		AForm &operator=(AForm const &other);
		
		std::string getName() const;
		bool getIsSigned() const;
		int getGradeSing() const;
		int getGradeExecute() const;
		
		virtual void beSigned(Bureaucrat & Bureaucrat);
		virtual void	execute(Bureaucrat const & executor) const = 0;
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
		class IsNotSignedFormException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};
std::ostream& operator<<(std::ostream &os, AForm const &instance);
#endif