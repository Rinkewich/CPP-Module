/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:37:27 by fardath           #+#    #+#             */
/*   Updated: 2022/11/15 15:42:52 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) 
{
	//std::cout << "Default constructor called\n";
	this->i = 0;
}

Fixed::Fixed(const Fixed &other)
{
	//std::cout << "Copy constructor called\n";
	this->i = other.getRawBits();
}
Fixed::Fixed(int const val)
{
	//std::cout << "Int constructor called\n";
	this->i = val << this->s_i;
}
Fixed::Fixed(float const val)
{
	//std::cout << "Float constructor called\n";
	this->i = roundf(val * (1 << this->s_i));
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called\n";
}


/*The 6 comparison operators*/
bool Fixed::operator>(Fixed const &other) const
{
	return (this->getRawBits() > other.getRawBits());
}
bool Fixed::operator<(Fixed const &other) const
{
	return (this->getRawBits() < other.getRawBits());
}
bool Fixed::operator>=(Fixed const &other) const
{
	return (this->getRawBits() >= other.getRawBits());
}
bool Fixed::operator<=(Fixed const &other) const
{
	return (this->getRawBits() <= other.getRawBits());
}
bool Fixed::operator==(Fixed const &other) const
{
	return (this->getRawBits() == other.getRawBits());
}
bool Fixed::operator!=(Fixed const &other) const
{
	return (this->getRawBits() != other.getRawBits());
}
/*The 5 arithmetic operators:*/

Fixed &Fixed::operator=(const Fixed &other)
{
	//std::cout << "Copy assignment operator called\n";
	this->i = other.getRawBits();
	return (*this);
}
Fixed Fixed::operator+(Fixed const &other)
{
	Fixed val(*this);

	val.setRawBits(this->getRawBits() + other.getRawBits());
	return(val);
}
Fixed Fixed::operator-(Fixed const &other)
{
	Fixed val(*this);

	val.setRawBits(this->getRawBits() - other.getRawBits());
	return(val);
}
Fixed Fixed::operator*(Fixed const &other)
{
	Fixed val(*this);
	long tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)other.getRawBits());
	val.setRawBits((tmp1 * tmp2) / (1 << Fixed::s_i));
	return (val);
}
Fixed Fixed::operator/(Fixed const &other)
{
	Fixed val(*this);
	long tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)other.getRawBits());
	val.setRawBits((tmp1 / tmp2) / (1 << Fixed::s_i));
	return (val);
}

/*The 4 increment/decrement*/
Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->i++;
	return (tmp);
}
Fixed Fixed::operator++()
{
	this->i++;
	return (*this);
}
Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->i--;
	return (tmp);
}
Fixed Fixed::operator--()
{
	this->i--;
	return (*this);
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
//	std::cout << "setRawBits member function called\n";
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
Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed const &min(Fixed const &a, Fixed const &b)
{
	return (Fixed::min(a, b));
}

Fixed &min(Fixed &a, Fixed &b)
{
	return (Fixed::min(a, b));
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed const &max(Fixed const &a, Fixed const &b)
{
	return (Fixed::max(a, b));
}

Fixed &max(Fixed &a, Fixed &b)
{
	return (Fixed::max(a, b));
}