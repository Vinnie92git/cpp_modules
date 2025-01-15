/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 21:31:50 by vini              #+#    #+#             */
/*   Updated: 2025/01/15 16:47:00 by vini             ###   ########.fr       */
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

static void		error()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << 0 << std::endl;
	std::cout << "float: " << 0 << std::endl;
	std::cout << "double: " << 0 << std::endl;
}

static void	charConversion(const std::string& param)
{
	char	c = param[0];
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

static void	floatConversion(const std::string& param)
{
	float	n = atof(param.c_str());

	if (n < 0 || n > 127)
		std::cout << "char: impossible" << std::endl;
	else if (n < 32 || n == 127)
		std::cout << "char: non-displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(n) << std::endl;
	std::cout << "int: " << static_cast<int>(n) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(2) << n << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(2) << static_cast<double>(n) << std::endl;
}

static void	doubleConversion(const std::string& param)
{
	double	n = atof(param.c_str());

	if (n < 0 || n > 127)
		std::cout << "char: impossible" << std::endl;
	else if (n < 32 || n == 127)
		std::cout << "char: non-displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(n) << std::endl;
	std::cout << "int: " << static_cast<int>(n) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(2) << static_cast<float>(n) << "f" << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(2) << n << std::endl;
}

static void	intConversion(const std::string& param)
{
	int	nbr = atoi(param.c_str());

	if (nbr < 0 || nbr > 127)
		std::cout << "char: impossible" << std::endl;
	else if (nbr < 32 || nbr == 127)
		std::cout << "char: non-displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(nbr) << std::endl;
	std::cout << "int: " << nbr << std::endl;
	std::cout << "float: " << static_cast<float>(nbr) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(nbr) << ".0" << std::endl;
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
	if (std::isprint(param[0]) && !std::isdigit(param[0]) && param.length() == 1)
		charConversion(param);
	else if (param == "+inff" || param == "-inff" || param == "nanf"
			|| param == "+inf" || param == "-inf" || param == "nan")
			pseudoConversion(param);
	else if (param[param.length() - 1] == 'f')
	{
		long int	i = 0;
		while (i < param.length() - 1 && (std::isdigit(param[i]) || param[i] == '.'))
			i++;
		if (i == param.length() - 1)
			floatConversion(param);
		else
			error();
	}
	else if (param.find('.') != std::string::npos)
	{
		long int	i = 0;
		while (std::isdigit(param[i]) || param[i] == '.')
			i++;
		if (i == param.length())
			doubleConversion(param);
		else
			error();
	}
	else if (std::isdigit(param[0]))
	{
		long	i = 0;
		while (std::isdigit(param[i]))
			i++;
		if (param.length() == i)
			intConversion(param);
		else
			error();
	}
	else
		error();
}
