/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:32:52 by vini              #+#    #+#             */
/*   Updated: 2025/02/08 16:01:11 by vini             ###   ########.fr       */
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

void	RPN::performOperation(std::stack<int>& rpnStack, const std::string& token)
{
	int	secondOperand = rpnStack.top();
	rpnStack.pop();
	int	firstOperand = rpnStack.top();
	rpnStack.pop();

	if (token == "+")
		rpnStack.push(firstOperand + secondOperand);
	else if (token == "-")
		rpnStack.push(firstOperand - secondOperand);
	else if (token == "/")
	{
		if (secondOperand == 0)
			return ;
		rpnStack.push(firstOperand / secondOperand);
	}
	else if (token == "*")
		rpnStack.push(firstOperand * secondOperand);
}

int		RPN::validNumber(const std::string& token)
{
	if (token < "0" || token > "9")
		return 0;
	return 1;
}

int		RPN::validOperator(const std::string& token)
{
	if (token != "+" && token != "-" && token != "/" && token != "*")
		return 0;
	return 1;
}

int	RPN::calculate(const std::string& expression)
{
	std::istringstream	expressionStream(expression);
	std::string			token;

	while (expressionStream >> token)
	{
		if (validNumber(token))
			rpnStack.push(std::atoi(token.c_str()));
		else if (validOperator(token))
		{
			if (rpnStack.size() < 2)
			{
				std::cerr << "Error" << std::endl;
				return 1;
			}
			performOperation(rpnStack, token);
		}
		else
		{
			std::cerr << "Error" << std::endl;
			return 1;
		}
	}
	if (rpnStack.size() == 1)
	{
		std::cout << rpnStack.top() << std::endl;
		return 0;
	}
	else
	{
		std::cerr << "Error" << std::endl;
		return 1;
	}
}
