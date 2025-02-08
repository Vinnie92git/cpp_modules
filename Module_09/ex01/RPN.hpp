/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:32:57 by vini              #+#    #+#             */
/*   Updated: 2025/02/08 15:59:31 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <stack>
#include <sstream>

class RPN
{
public:
	RPN();
	RPN(const RPN& toCopy);
	RPN& operator=(const RPN& toAssign);
	~RPN();

	void	performOperation(std::stack<int>& rpnStack, const std::string& token);
	int		validNumber(const std::string& token);
	int		validOperator(const std::string& token);
	int		calculate(const std::string& expression);

private:
	std::stack<int>	rpnStack;
};

#endif