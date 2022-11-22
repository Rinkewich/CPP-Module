/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:36:56 by fardath           #+#    #+#             */
/*   Updated: 2022/11/22 19:52:57 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void printArr(T& src)
{
	std::cout<< src << "\t";
}
template<typename T>
void iter(T *arr, size_t len, void f(T &))
{
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}

int main(void) 
{	
	std::cout << "CHAR:" << std::endl;
	char arrCh[4] = {'a', 'b', 'c', 'd'};
	iter(arrCh, 4, printArr);

	std::cout << std::endl << "INT:" << std::endl;
	int arrInt[4] = {1, 2, 21, 42};
	iter(arrInt, 4, printArr);

	std::cout << std::endl << "FLOAT:" << std::endl;
	float arrFl[4] = {21.0f, 42.0f, 2.1f, 0.42f};
	iter(arrFl, 4, printArr);

	std::cout << std::endl;

	return 0;
	
}