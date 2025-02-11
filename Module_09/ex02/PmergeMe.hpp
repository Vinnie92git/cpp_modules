/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:59:34 by vini              #+#    #+#             */
/*   Updated: 2025/02/11 18:43:11 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <iomanip>
#include <vector>

class PmergeMe
{
public:
	PmergeMe();
	PmergeMe(const PmergeMe& toCopy);
	PmergeMe& operator=(const PmergeMe& toAssign);
	~PmergeMe();
};

#endif