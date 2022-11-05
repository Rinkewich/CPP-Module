/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:53:11 by fardath           #+#    #+#             */
/*   Updated: 2022/11/05 16:57:40 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string Contact::get_fname(void) const
{
	return this->first_name;
}

std::string Contact::get_lname(void) const
{
	return this->last_name;
}

std::string Contact::get_nick(void) const
{
	return this->nickname;
}

std::string Contact::get_phone_num(void) const
{
	return this->phone_number;
}

std::string Contact::get_secret(void) const
{
	return this->darkest_secret;
}

void Contact::set_fname(std::string str)
{
	this->first_name = str;
}
void Contact::set_lname(std::string str)
{
	this->last_name = str;
}

void Contact::set_nick(std::string str)
{
	this->nickname = str;
}

void Contact::set_phone_num(std::string str)
{
	this->phone_number = str;
}

void Contact::set_secret(std::string str)
{
	this->darkest_secret = str;
}