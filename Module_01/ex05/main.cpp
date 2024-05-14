/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipalaci <vipalaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:08:47 by vipalaci          #+#    #+#             */
/*   Updated: 2024/05/14 14:47:19 by vipalaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// #include "Harl.hpp"

int	validInput(std::string input)
{
	if (input != "DEBUG" && input != "INFO" && input != "WARNING" && input != "ERROR")
		return (0);
	return (1);
}

void	instructions(void)
{
	std::cout << std::endl;
	std::cout << "-------------HARL LEVELS--------------" << std::endl;
	std::cout << "\t\tDEBUG" << std::endl;
	std::cout << "\t\tINFO" << std::endl;
	std::cout << "\t\tWARNING" << std::endl;
	std::cout << "\t\tERROR" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	// Harl		harl;
	std::string	input;

	instructions();
	while (1)
	{
		std::cout << "Enter a level: " << std::flush;
		std::cin >> input;
		if (!validInput(input))
			std::cout << "Please enter a valid level." << std::endl;
		else
			// harl.complain(input);
	}
	return (0);
}
