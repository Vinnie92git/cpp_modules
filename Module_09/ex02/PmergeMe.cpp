/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:59:37 by vini              #+#    #+#             */
/*   Updated: 2025/02/11 18:48:17 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

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
