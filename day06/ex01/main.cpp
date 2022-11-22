/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:36:56 by fardath           #+#    #+#             */
/*   Updated: 2022/11/22 18:10:32 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}
Data * deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}
int main(void) 
{
	Data	data = { "test", 42, 'a'};
	Data*	dataPtr = &data;

	std::cout << "data address: " << &data << std::endl;
	std::cout << "data values : " << data.a << " " << data.b << " " << data.type << std::endl;

	uintptr_t raw = serialize(dataPtr);

	std::cout << "raw bits: " << raw << std::endl;

	Data*	newData = deserialize(raw);
	std::cout << "raw bits: " << raw << std::endl;

	std::cout << "data address: " << dataPtr << std::endl;
	std::cout << "newData address: " << newData << std::endl;
	std::cout << "newData values : " << newData->a << " " << newData->b << " " << newData->type << std::endl;
	return 0;
}