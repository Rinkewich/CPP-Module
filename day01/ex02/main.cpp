/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:36:56 by fardath           #+#    #+#             */
/*   Updated: 2022/11/08 14:12:11 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *pstr = &str;
	std::string &rstr = str;
	//std::cout << "Memory address:\n";
	std::cout << "&str:\t" << &str << std::endl;
	std::cout << "pstr:\t" << pstr << std::endl;
	std::cout << "&rstr:\t" << &rstr << std::endl;
	//std::cout << "Value of the string:\n";
	std::cout << "str:\t" << str << std::endl;
	std::cout << "*pstr:\t" << *pstr << std::endl;
	std::cout << "rstr:\t" << rstr << std::endl;
	return (0);
}
