/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:59:37 by vini              #+#    #+#             */
/*   Updated: 2025/02/13 22:18:13 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(std::vector<int> input) : mainVector(input.begin(), input.end()), mainDeque(input.begin(), input.end()) {}

PmergeMe::PmergeMe(const PmergeMe& toCopy)
{
	*this = toCopy;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& toAssign)
{
	(void)toAssign;
	return *this;
}

PmergeMe::~PmergeMe()
{
	
}

void	PmergeMe::mergeInsert(std::vector<int> container)
{
	if (container.size() < 2)
		return ;

	if (container.size() == 2)
	{
		if (container[0] > container[1])
			std::swap(container[0], container[1]);
		return ;
	}

	std::vector<std::pair<int, int>>	pairs;
	int	lastElement = -1;

	
}

void	PmergeMe::sort()
{
	mergeInsert(mainVector);
}
