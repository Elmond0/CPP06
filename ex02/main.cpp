/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 00:00:00 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/17 17:00:01 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <ctime>
#include <cstdlib>
#include <iostream>

Base*	generate( void )
{
	static bool seeded = false;
	if (!seeded)
	{
		std::srand(std::time(NULL));
		seeded = true;
	}
	int r = std::rand() % 3;
	if (r == 0)      { Base* res = new A; return res; }
	else if (r == 1) { Base* res = new B; return res; }
	else             { Base* res = new C; return res; }
}

void	identify( Base* p )
{
	if      (dynamic_cast<A*>(p)) { std::cout << "A" << std::endl; }
	else if (dynamic_cast<B*>(p)) { std::cout << "B" << std::endl; }
	else if (dynamic_cast<C*>(p)) { std::cout << "C" << std::endl; }
	else                          { std::clog << "Error" << std::endl; }
}

void	identify( Base& p )
{
	if      (dynamic_cast<A*>(&p)) { std::cout << "A" << std::endl; }
	else if (dynamic_cast<B*>(&p)) { std::cout << "B" << std::endl; }
	else if (dynamic_cast<C*>(&p)) { std::cout << "C" << std::endl; }
	else                           { std::clog << "Error" << std::endl; }
}

int	main( void )
{
	Base*	b = generate();
	Base*	c = generate();
	Base&	n = *c;

	std::cout << "Pointer:   "; identify(b);
	std::cout << "Reference: "; identify(*b);
	std::cout << "Pointer:   "; identify(c);
	std::cout << "Reference: "; identify(*c);
	std::cout << "Pointer class type: ";	identify(&n);
	std::cout << "Reference class type: ";	identify(n);

	delete b;
	delete c;
	return 0;
}
