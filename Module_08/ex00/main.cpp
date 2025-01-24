/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 20:37:55 by vini              #+#    #+#             */
/*   Updated: 2025/01/24 15:05:36 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include "easyfind.hpp"

int	main(void)
{
	std::vector<int>	vec;
	std::list<int>		lst;

	for (int i = 0; i < 5; i++)
	{
		vec.push_back(i);
		lst.push_back(i);
	}
	try
	{
		std::vector<int>::iterator	it = easyfind(vec, 3);
		std::cout << "Value found in vector: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	try
	{
		std::list<int>::iterator	it = easyfind(lst, 6);
		std::cout << "Value found in list: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
