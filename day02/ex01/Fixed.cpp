/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:37:27 by fardath           #+#    #+#             */
/*   Updated: 2022/11/14 20:58:49 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) 
{
	std::cout << "Default constructor called\n";
	this->i = 0;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called\n";
	this->i = other.getRawBits();
}
Fixed::Fixed(int const val)
{
	std::cout << "Int constructor called\n";
	this->i = val << this->s_i;
}
Fixed::Fixed(float const val)
{
	std::cout << "Float constructor called\n";
	this->i = roundf(val * (1 << this->s_i));
}
Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called\n";
	this->i = other.getRawBits();
	return (*this);
}
Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called\n";
	return (this->i);
}
std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    out << value.toFloat();
    return (out);
}
void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called\n";
	this->i = raw;
}
float Fixed::toFloat( void ) const
{
	return ((float)this->i / (float)(1 << this->s_i));
}
int Fixed::toInt( void ) const
{
	return (this->i >> this->s_i);
}