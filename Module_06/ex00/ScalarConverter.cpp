/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 21:31:50 by vini              #+#    #+#             */
/*   Updated: 2024/11/26 22:38:23 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& toCopy)
{
	std::cout << "ScalarConverter copy constructor called" << std::endl;
	*this = toCopy;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& toAssign)
{
	(void)toAssign;
	std::cout << "ScalarConverter copy assignment operator called" << std::endl;
	return *this;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter default destructor called" << std::endl;
}

static void	charConversion(const std::string& param)
{
	char	c = param[0];
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

static void	pseudoConversion(const std::string& param)
{
	float	pseudoFloat;
	double	pseudoDouble;

	if (param == "nanf" || param == "nan")
	{
		pseudoFloat = std::numeric_limits<float>::quiet_NaN();
		pseudoDouble = std::numeric_limits<double>::quiet_NaN();
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << pseudoFloat << "f" << std::endl;
		std::cout << "double: " << pseudoDouble << std::endl;
	}
	else if (param == "+inff" || param == "+inf")
	{
		pseudoFloat = std::numeric_limits<float>::infinity();
		pseudoDouble = std::numeric_limits<double>::infinity();
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << pseudoFloat << "f" << std::endl;
		std::cout << "double: " << pseudoDouble << std::endl;
	}
	else if (param == "-inff" || param == "-inf")
	{
		pseudoFloat = -std::numeric_limits<float>::infinity();
		pseudoDouble = -std::numeric_limits<double>::infinity();
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << pseudoFloat << "f" << std::endl;
		std::cout << "double: " << pseudoDouble << std::endl;
	}
}

void	ScalarConverter::convert(const std::string& param)
{
	if (std::isalpha(param[0]) && param.length() == 1)
		charConversion(param);
	else if (param == "+inff" || param == "-inff" || param == "nanf"
			|| param == "+inf" || param == "-inf" || param == "nan")
			pseudoConversion(param);
	else
		std::cout << "In progress..." << std::endl;
}
