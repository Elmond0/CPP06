/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 09:56:01 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/15 00:00:00 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char** av)
{
	if (ac != 2)
	{
		std::clog << "Insert one argument" << std::endl;
		return 1;
	}
	std::string str = static_cast<std::string>(av[1]);
	ScalarConverter::convert(str);
	return 0;
}
