/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 20:37:55 by vini              #+#    #+#             */
/*   Updated: 2025/02/20 14:04:56 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "PmergeMe.hpp"

int	main(int argc, char** argv)
{
	if (argc < 3)
	{
		std::cerr << "Error: invalid number of arguments" << std::endl;
		return 1;
	}
	else
	{
		std::vector<int>	sequence;
		for(int i = 1; i < argc; ++i)
		{
			int	nb = std::atoi(argv[i]);
			if (nb < 0)
			{
				std::cerr << "Error: only potitive integers allowed" << std::endl;
				return 1;
			}
			sequence.push_back(nb);
		}
		PmergeMe	sorter(sequence);
		sorter.sort();
	}

	return 0;
}
