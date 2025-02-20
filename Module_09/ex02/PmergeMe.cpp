/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:59:37 by vini              #+#    #+#             */
/*   Updated: 2025/02/20 14:46:35 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(std::vector<int> input) : mainVector(input.begin(), input.end()) {}

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

void	PmergeMe::mergeInsert(std::vector<int>& container)
{
	if (container.size() < 2)
		return ;

	if (container.size() == 2)
	{
		if (container[0] > container[1])
			std::swap(container[0], container[1]);
		return ;
	}

	std::vector<std::pair<int, int> >	pairs;
	int	lastElement = -1;

	if (container.size() % 2 != 0)
	{
		lastElement = container.back();
		container.pop_back();
	}

	for (size_t i = 0; i < container.size(); i += 2)
	{
		if (container[i] > container[i + 1])
			std::swap(container[i], container[i + 1]);
		pairs.push_back(std::make_pair(container[i], container[i + 1]));
	}

	std::vector<int>	sorted;

	for (size_t i = 0; i < pairs.size(); ++i)
		sorted.push_back(pairs[i].second);

	mergeInsert(sorted);

	std::vector<int>	finalSorted;

	for (size_t i = 0; i < sorted.size(); ++i)
		finalSorted.push_back(sorted[i]);

	for (size_t i = 0; i < pairs.size(); ++i)
		finalSorted.insert(std::lower_bound(finalSorted.begin(), finalSorted.end(), pairs[i].first), pairs[i].first);

	if (lastElement != -1)
		finalSorted.insert(std::lower_bound(finalSorted.begin(), finalSorted.end(), lastElement), lastElement);

	container.assign(finalSorted.begin(), finalSorted.end());
}

void	PmergeMe::sort()
{
	std::cout << "Unsorted sequence: ";
	for (size_t i = 0; i < mainVector.size(); ++i)
		std::cout << mainVector[i] << " ";

	clock_t	start = clock();
	mergeInsert(mainVector);
	clock_t	end = clock();
	double	vec_time = double (end - start) / CLOCKS_PER_SEC;

	std::cout << "\nSorted sequence: ";
	for (size_t i = 0; i < mainVector.size(); ++i)
		std::cout << mainVector[i] << " ";

	std::cout << "\nTime to sort the sequence using an std::vector: " << vec_time << " seconds" << std::endl;
	// std::cout << "\nTime to sort the sequence using an std::deque: " << deq_time << " seconds" << std::endl;
}
