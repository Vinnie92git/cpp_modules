/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 20:02:12 by vini              #+#    #+#             */
/*   Updated: 2025/01/27 21:57:28 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : size(0) {}

Span::Span(unsigned int n) : size(n) {}

Span::Span(const Span& toCopy)
{
	size = toCopy.size;
	numbers = toCopy.numbers;
	*this = toCopy;
}

Span& Span::operator=(const Span& toAssign)
{
	if (this != &toAssign)
	{
		size = toAssign.size;
		numbers = toAssign.numbers;
	}
	return *this;
}

Span::~Span() {}

void	Span::addNumber(int nbr)
{
	if (numbers.size() >= size)
		throw std::overflow_error("Error: cannot add more numbers, span is full");
	numbers.push_back(nbr);
}

int		Span::shortestSpan() const
{
	if (numbers.size() < 2)
		throw std::logic_error("Error: not enough numbers to find a span");

	std::vector<int>	sorted = numbers;
	std::sort(sorted.begin(), sorted.end());

	int	shortest = std::numeric_limits<int>::max();
	for (size_t i = 1; i < sorted.size(); ++i)
	{
		int span = sorted[i] - sorted[i - 1];
		if (span < shortest)
			shortest = span;
	}
	return shortest;
}

int		Span::longestSpan() const
{
	if (numbers.size() < 2)
		throw std::logic_error("Error: not enough numbers to find a span");

	int	min = *std::min_element(numbers.begin(), numbers.end());
	int	max = *std::max_element(numbers.begin(), numbers.end());

	return max - min;
}
