/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:41:40 by vini              #+#    #+#             */
/*   Updated: 2024/11/23 16:27:10 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	{
		
	}
	{
		try
		{
			Intern	randomWageslave;
			AForm*	scf;

			scf = randomWageslave.makeForm("shrubbery creation", "this barren directory");
			if (scf)
				delete scf;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}
