/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:41:40 by vini              #+#    #+#             */
/*   Updated: 2024/11/12 23:14:35 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	{
		Bureaucrat	John;
		Bureaucrat	Jane("Jane Doe", 50);
		Form	a;
		Form	b("BB02", true, 100, 50);
		Form	c("CC02", false, 100, 50);

		std::cout << John << std::endl;
		std::cout << Jane << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;

		a.beSigned(John);
		std::cout << a << std::endl;
		b.beSigned(Jane);
		std::cout << b << std::endl;
	}
	{
		Bureaucrat	Papadopoulos("Papadopoulos", 101);
		Form	c("CC02", false, 100, 150);
		
		try
		{
			c.beSigned(Papadopoulos);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}
