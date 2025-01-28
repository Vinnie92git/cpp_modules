/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 20:01:29 by vini              #+#    #+#             */
/*   Updated: 2025/01/28 17:46:19 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <limits>

class Span
{
public:
	Span();
	Span(unsigned int n);
	Span(const Span& toCopy);
	Span& operator=(const Span& toAssign);
	~Span();

	void	addNumber(int nbr);
	void	addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int		shortestSpan() const;
	int		longestSpan() const;

private:
	std::vector<int>	numbers;
	unsigned int		size;
};

#endif