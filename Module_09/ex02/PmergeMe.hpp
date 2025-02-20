/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:59:34 by vini              #+#    #+#             */
/*   Updated: 2025/02/20 15:02:54 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <iomanip>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>
#include <cstdlib>

class PmergeMe
{
public:
	PmergeMe(std::vector<int> input);
	PmergeMe(const PmergeMe& toCopy);
	PmergeMe& operator=(const PmergeMe& toAssign);
	~PmergeMe();

	template <typename T>
	void	mergeInsert(T& container);
	void	sort();

private:
	std::vector<int>	mainVector;
	std::deque<int>		mainDeque;
};

#endif