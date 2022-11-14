/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:00:17 by fardath           #+#    #+#             */
/*   Updated: 2022/11/14 17:27:56 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}
void Harl::debug(void)
{
	std::cout << "DEBUG level\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl;
}
void Harl::info(void)
{
	std::cout << "INFO level\n";
	std::cout << "I cannot believe adding extra bacon costs more money. \nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!\n";
}
void Harl::warning(void)
{
	std::cout << "WARNING level\n";
	std::cout << "I think I deserve to have some extra bacon for free. \nI’ve been coming for years whereas you started working here since last month\n";
}
void Harl::error(void)
{
	std::cout << "ERROR level\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}
void Harl::complain(std::string level)
{
	void (Harl::*func[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*func[i])();
			break ;
		}
	}
}