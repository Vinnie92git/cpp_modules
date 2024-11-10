/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:41:40 by vini              #+#    #+#             */
/*   Updated: 2024/11/10 20:42:51 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Bureaucrat.hpp"

int	main(void)
{
	{
		Bureaucrat a;
		std::cout << a << std::endl;
		a.increment();
		std::cout << a << std::endl;
	}
	{
		try
		{
			Bureaucrat	Sanchez("Sanchez", 1);
			Bureaucrat	Feijoo("Feijoo", 150);
			std::cout << Sanchez << std::endl;
			std::cout << Feijoo << std::endl;
			Sanchez.decrement();
			Feijoo.increment();
			std::cout << Sanchez << std::endl;
			std::cout << Feijoo << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}
