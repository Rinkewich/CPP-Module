/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:36:56 by fardath           #+#    #+#             */
/*   Updated: 2022/11/22 17:26:13 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <limits>
#include <cmath>

void convert_char(double val)
{
	std::cout << "char: ";
	if (!isascii(val) || std::isnan(val) || std::isinf(val))
		std::cout << "impossible\n";
	else if (!isprint(val))
		std::cout << "Non displayable\n";
	else std::cout << "'" << static_cast<char>(val) << "'\n";
}
void convert_float(double val)
{
	std::cout << "float: ";
	if (std::isinf(val) || std::isnan(val))
		std::cout << val;
	if (val < -std::numeric_limits<float>::max() || val > std::numeric_limits<float>::max())
		std::cout << "impossible\n";
	else std::cout  << static_cast<float>(val) << "f\n";
}
void convert_int(double val)
{
	std::cout << "int: ";
	if (std::isnan(val) || std::isinf(val) || val < std::numeric_limits<int>::min() || val > std::numeric_limits<int>::max())
		std::cout << "impossible\n";
	else std::cout << static_cast<int>(val) << "\n";
}
void convert_double(double val)
{
	std::cout << "double: ";
	if (std::isnan(val) || std::isinf(val))
		std::cout << val;
	else if (val < -std::numeric_limits<double>::max() || val > std::numeric_limits<double>::max())
		std::cout << "impossible\n";
	else std::cout << static_cast<double>(val) << "\n";
}
int main(int argc, char **argv) 
{
	double val;
	if (argc != 2)
	{
		std::cout << "Bad number of arguments\n";
		return 1;
	}
	if (!argv[1][1] && !std::isdigit(argv[1][0]))
		val = static_cast<double>(argv[1][0]);
	else
		val = std::strtod(argv[1], NULL);
	std::cout.precision(1);
	std::cout << std::fixed;
	convert_char(val);
	convert_int(val);
	convert_float(val);
	convert_double(val);
	return 0;
}