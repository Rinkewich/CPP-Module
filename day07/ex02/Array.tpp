/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:28:08 by fardath           #+#    #+#             */
/*   Updated: 2022/11/22 21:21:13 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	_arr = new T[0];
	_n = 0;
}
template <typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]), _n(n) {}

template<typename T>
Array<T>::Array(const Array<T> &copy)
{
	this->_arr = new T[copy.getN()];
	this->_n = copy.getN();
	for (unsigned int i = 0; i < this->_n; i++) {
		this->_arr[i] = copy.getArr(i);
	}
}
template<typename T>
Array<T>::~Array()
{
	delete [] _arr;
}
template<typename T>
Array<T>& Array<T>::operator=(const Array<T> &copy)
{
	if (this == &copy)
		return *this;
	this->_arr = new T[copy.getN()];
	this->_n = copy.getN();
	for (unsigned int i = 0; i < this->_n; i++) {
		this->_arr[i] = copy.getArr(i);
	}
	return *this;
}
template<typename T>
T& Array<T>::operator[](unsigned int n)
{
	if (n < 0 || n >= this->_n)
		throw Array<T>::RangeException();
	return this->_arr[n];
}
template<typename T>
T& Array<T>::operator[](unsigned int n) const
{
	if (n < 0 || n >= this->_n)
		throw Array<T>::RangeException();
	return this->_arr[n];
}
template<typename T>
T Array<T>::getArr(unsigned int i) const
{
	return this->_arr[i];
}
template<typename T>
unsigned int Array<T>::getN() const
{
	return this->_n;
}
template<typename T>
unsigned int Array<T>::size()
{
	return _n;
}

template <typename T>
const char* Array<T>::RangeException::what() const throw()
{
	return "Index is out of bounds";
}