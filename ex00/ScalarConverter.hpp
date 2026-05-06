/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 09:56:01 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/06 10:18:25 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <limits>
#include <cmath>
#include <cerrno>
#include <climits>
#include <cfloat>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter& operator=(const ScalarConverter& other);
		~ScalarConverter();
		
		enum eType { CHAR, INT, FLOAT, DOUBLE, UNKNOWN};
		
		static bool isCharLit(std::string &lit);
		static bool isIntLit(std::string &lit);
		static bool isFloatLit(std::string &lit);
		static bool isDoubleLit(std::string &lit);
		static void printChar(double val, bool imp_nbr);
		static void printInt(double val, bool imp_nbr);
		static void printFloat(double val);
		static void printDouble(double val);
		static eType detect(std::string& lit);
		
	public:
		static void convert(std::string& lit);
};

#endif