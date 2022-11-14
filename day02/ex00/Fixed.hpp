/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:37:35 by fardath           #+#    #+#             */
/*   Updated: 2022/11/14 20:16:01 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int i;
		static const int s_i = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &other);
		~Fixed();
		Fixed &operator=(const Fixed &other);
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};
#endif