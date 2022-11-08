/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:52:31 by fardath           #+#    #+#             */
/*   Updated: 2022/11/07 20:55:02 by fardath          ###   ########.fr       */
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
	{
		std::cout << "The first contact will be change " << this->contacts[this->index % 8].get_fname() << std::endl;
		this->index = 0;
	}
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
std::string	add_spaces(int n)
{
	std::string	str;

	while (n--)
		str.append(" ");
	return (str);
}

std::string	put_point(std::string str, long unsigned max)
{
	if (str.size() > max)
	{
		str.resize(max);
		str[str.size() - 1] = '.';
	}
	return (str);
}
int table(Contact contacts[8])
{
	int	i = -1;
	std::string	str;
	if (contacts[0].get_fname().size())
	{
		std::cout << " ___________________________________________ \n";
		std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
		std::cout << "|----------|----------|----------|----------|\n";
	}
	while(++i < 8)
	{
		if (contacts[i].get_fname().size())
		{
			
			str = i + '0';
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = put_point(contacts[i].get_fname(), 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = put_point(contacts[i].get_lname(), 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = put_point(contacts[i].get_nick(), 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			std::cout << "|\n";
		}
		else
			break;
	}
	if (contacts[0].get_fname().size())
		std::cout << " ------------------------------------------- \n";
	return  i;
}
void PhoneBook::search(void)
{
	std::string indx;
	if(!table(this->contacts))
	{
		std::cout <<"You have no contacts\n";
		return ;
	}
	while (!std::cin.eof())
	{
		std::cout << "Enter index: ";
		if (std::getline(std::cin, indx) && indx.size() == 1 && (indx[0] >= 48 && indx[0] <= 55)
			&& this->contacts[indx[0] - '0'].get_fname().size())
				break;
		else
			std::cout << "Invalid index!" << std::endl;
	}
	if (!std::cin.eof())
		this->print(this->contacts[indx[0] - '0']);
}
void PhoneBook::print(Contact contact)
{
	if (!contact.get_fname().size())
	{
		std::cout << "Failed to get info for this contact" << std::endl;
		return ;
	}
	std::cout << "First Name: " << contact.get_fname() << std::endl;
	std::cout << "Last Name: " << contact.get_lname() << std::endl;
	std::cout << "Nickname: " << contact.get_nick() << std::endl;
	std::cout << "Phone Number: " << contact.get_phone_num() << std::endl;
	std::cout << "Darkest Secret: " << contact.get_secret() << std::endl;
}