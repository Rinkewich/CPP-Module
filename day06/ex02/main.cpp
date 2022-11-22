/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:36:56 by fardath           #+#    #+#             */
/*   Updated: 2022/11/22 18:42:41 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <time.h>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	int stime;
	long ltime;

	ltime = time (NULL);
	stime = (unsigned int) ltime/2;
	srand(stime);
	switch (rand() % 3) {
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
	}
	return NULL;
}
void	identify(Base* p) {

	if (dynamic_cast<A*>(p))
		std::cout << "Input type is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Input type is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Input type is C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}
void	identify(Base& p) {
	try {
		A *a = &dynamic_cast<A &>(p);
		static_cast<void>(a);
		std :: cout << "A" << std :: endl;
	}
	catch (std :: exception &e) {
		static_cast<void>(e);
	}
	try {
		B *b = &dynamic_cast<B &>(p);
		static_cast<void>(b);
		std :: cout << "B" << std :: endl;
	}
	catch (std :: exception &e) {
		static_cast<void>(e);
	}
	try {
		C *c = &dynamic_cast<C &>(p);
		static_cast<void>(c);
		std :: cout << "C" << std :: endl;
	}
	catch (std :: exception &e) {
		static_cast<void>(e);
	}
 }
int main(void) 
{
	Base* ptr = generate();
	Base& ref = *ptr;

	identify(ptr);
	identify(ref);

	delete ptr;

	return 0;
}