/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:52:01 by fardath           #+#    #+#             */
/*   Updated: 2022/11/05 18:32:41 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string command;
	PhoneBook	phone;
	while (command != "EXIT")
	{
		std::cout << "What do your want: ";
		std::getline(std::cin, command);
		if (command == "ADD")
			phone.add();
		if (command == "SEARCH")
			phone.search();
	}
	return(0);
}