/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:32:52 by vini              #+#    #+#             */
/*   Updated: 2025/02/08 14:00:37 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN& toCopy)
{
	*this = toCopy;
}

RPN& RPN::operator=(const RPN& toAssign)
{
	(void)toAssign;
	return *this;
}

RPN::~RPN() {}

int		RPN::validNumber(const char& number)
{
	if (!std::isdigit(number))
		return 0;

	int	nb = std::atoi(&number);

	if (nb < 0 || nb > 9)
		return 0;
	return 1;
}

int		RPN::validOperator(const char& token)
{
	if (token != '+' && token != '-' && token != '/' && token != '*' && token != ' ')
		return 0;
	return 1;
}

void	RPN::calculate(const std::string& expression)
{
	int	i = 0;

	while (expression[i])
	{
		if (validOperator(expression[i]) || validNumber(expression[i]))
				std::cout << expression[i] << std::endl;
		else
			std::cout << "Error: invalid token" << std::endl;
		i++;
	}
}