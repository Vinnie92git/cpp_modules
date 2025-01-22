/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 12:53:50 by vini              #+#    #+#             */
/*   Updated: 2025/01/22 18:10:28 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "Array.hpp"

int	main(void)
{
	{
		Array<int>	a1;
		Array<int>	a2(4);
		Array<int>	a3 = a1;
		Array<int>	a4;
		a4 = a2;

		std::cout << "Array a1 address: " << &a1 << " // Array a1 size: " << a1.size() << std::endl;
		std::cout << "Array a2 address: " << &a2 << " // Array a2 size: " << a2.size() << std::endl;
		std::cout << "Array a3 address: " << &a3 << " // Array a3 size: " << a3.size() << std::endl;
		std::cout << "Array a4 address: " << &a4 << " // Array a4 size: " << a4.size() << std::endl;
	}
	{
		Array<std::string>	s(2);
		s[0] = "hello, ";
		s[1] = "world!";

		std::cout << "Array of strings: " << s[0] << s[1] << std::endl;
		std::cout << "Array of strings at index 0: " << s[0] << std::endl;
		std::cout << "Array of strings at index 1: " << s[1] << std::endl;
		
		try
		{
			std::cout << "Array of strings at index 2: " << s[2] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}