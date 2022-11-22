/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:28:12 by fardath           #+#    #+#             */
/*   Updated: 2022/11/22 20:56:13 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdlib.h>
#include <time.h>
#include <exception>

template<typename T>
class Array {
	private:
		T* _arr;
		unsigned int _n;
	public:
		Array();
		Array(unsigned int n);
		Array(Array const& copy);
		~Array();
		Array& operator=(Array const& copy);
		T& operator[](unsigned int n);
		T& operator[](unsigned int n) const;
		unsigned int size();
		T getArr(unsigned int i) const;
		unsigned int getN(void) const;
		class RangeException : public std::exception 
		{
			virtual const char* what() const throw();
		};
};

#include "Array.tpp"

#endif