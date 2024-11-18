/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:41:40 by vini              #+#    #+#             */
/*   Updated: 2024/11/18 22:33:25 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	{
		// Bureaucrat				john;
		// Bureaucrat				jane("Jane Doe", 140);
		// Bureaucrat				cheto("Donald", 5);
		// ShrubberyCreationForm	a;
		// RobotomyRequestForm		b;
		// PresidentialPardonForm	c;
		// std::cout << a << std::endl;
		// std::cout << b << std::endl;
		// std::cout << c << std::endl;
		// a.beSigned(john);
		// std::cout << a << std::endl;
	}
	{
		try
		{
			Bureaucrat				john;
			Bureaucrat				jane("Jane Doe", 140);
			Bureaucrat				cheto("Donald", 5);

			ShrubberyCreationForm	a;
			RobotomyRequestForm		b;
			PresidentialPardonForm	c;
			
			std::cout << a << std::endl;
			std::cout << b << std::endl;
			std::cout << c << std::endl;
			
			c.beSigned(jane);
			std::cout << c << std::endl;
			jane.executeForm(c);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}
