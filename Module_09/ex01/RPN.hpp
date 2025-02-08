/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:32:57 by vini              #+#    #+#             */
/*   Updated: 2025/02/08 13:22:24 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <stack>

class RPN
{
public:
	RPN();
	RPN(const RPN& toCopy);
	RPN& operator=(const RPN& toAssign);
	~RPN();

	void	calculate(const std::string& expression);
	int		validNumber(const char& number);
	int		validOperator(const char& token);

private:
	std::stack<char>	stack;
};

#endif