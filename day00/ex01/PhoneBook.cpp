/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:52:31 by fardath           #+#    #+#             */
/*   Updated: 2022/11/05 17:56:07 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
	
}
PhoneBook::~PhoneBook(void)
{
	
}

void PhoneBook::add(void)
{
	std::string str;

	str = "";
	if (this->index > 7)
		std::cout << "The first contact will be change" << this->contacts[this->index % 8].get_fname() << std::endl;
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter first name: ";
		if (std::getline(std::cin, str) && str != "")
			this->contacts[this->index].set_fname(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter last name: ";
		if (std::getline(std::cin, str) && str != "")
			this->contacts[this->index].set_lname(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter nickname: ";
		if (std::getline(std::cin, str) && str != "")
			this->contacts[this->index].set_nick(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter phone number: ";
		if (std::getline(std::cin, str) && str != "")
			this->contacts[this->index].set_phone_num(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter darkest secret: ";
		if (std::getline(std::cin, str) && str != "")
			this->contacts[this->index].set_secret(str);
	}
	this->index++;
}
