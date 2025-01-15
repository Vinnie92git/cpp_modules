/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 21:31:46 by vini              #+#    #+#             */
/*   Updated: 2025/01/14 20:58:59 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

class ScalarConverter
{
public:
	static void	convert(const std::string& param);

private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter& toCopy);
	ScalarConverter& operator=(const ScalarConverter& toAssign);
	~ScalarConverter();
};

#endif