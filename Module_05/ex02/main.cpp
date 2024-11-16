/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:41:40 by vini              #+#    #+#             */
/*   Updated: 2024/11/16 00:52:20 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	{
		// Bureaucrat				jon("John", 50);
		// PresidentialPardonForm	form;
		// std::cout << jon << std::endl;
		// std::cout << form << std::endl;
		// form.beSigned(jon);
		// std::cout << form << std::endl;
	}
	{
		try
		{
			Bureaucrat				jon("John", 50);
			PresidentialPardonForm	form;
			std::cout << jon << std::endl;
			std::cout << form << std::endl;
			form.beSigned(jon);
			std::cout << form << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}
