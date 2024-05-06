/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:13:14 by vini              #+#    #+#             */
/*   Updated: 2024/05/06 22:21:19 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <limits>

void	instructions(void)
{
	std::cout << std::endl;
	std::cout << "-------------PHONEBOOK COMMANDS--------------" << std::endl;
    std::cout << "ADD\t: to add a contact." << std::endl;
    std::cout << "SEARCH\t: to search for a contact." << std::endl;
    std::cout << "EXIT\t: to exit the phonebook." << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	PhoneBook 	phonebook;
	std::string	input = "";
	
	instructions();
	while (true)
	{
		std::cin >> input;
		if (std::cin.eof())
			break ;
		if (input.compare("ADD") == 0)
			phonebook.add_contact();
		else if (input.compare("SEARCH") == 0)
			phonebook.display_phonebook();
		else if (input.compare("EXIT") == 0)
		{
			std::cout << "Exiting your phonebook" << std::endl;
			break ;
		}
		else
		{
			std::cout << "Invalid command. Please try again." << std::endl;
			instructions();
		}
	}
	return (0);
}