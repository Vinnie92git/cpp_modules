/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipalaci <vipalaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:15:43 by vini              #+#    #+#             */
/*   Updated: 2024/05/09 12:34:46 by vipalaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	m_empty = true;
	m_nb_contacts = 0;
}

PhoneBook::~PhoneBook()
{
}

int	is_number(std::string str)
{
	for (size_t i = 0; i < str.length(); ++i)
		if (!isdigit(str[i]))
			return false;
	return true;
}

void	PhoneBook::search_contact(void)
{
	std::string	input;
	int			index = -1;
	
	std::cout << "Enter contact index: " << std::flush;
	std::cin >> input;
	if (!is_number(input))
		std::cout << "Invalid input. Please enter a valid number." << std::endl;
	else
	{
		index = atoi(input.c_str());
		if ((index >= 0 && index <= 7) && (index < this->m_nb_contacts))
			this->m_contacts[index].display_fields();
		else
			std::cout << "Invalid index. Please enter a valid number." << std::endl;
	}
	std::cin.clear();
	std::cin.ignore(1000, '\n');
}

void	PhoneBook::display_phonebook(void)
{
	std::cout << std::endl;
	std::cout << "-------------PHONEBOOK CONTACTS--------------" << std::endl;
	std::cout << "|" << std::setw(10) << std::right << "Index" << std::flush;
	std::cout << "|" << std::setw(10) << std::right << "First Name" << std::flush;
	std::cout << "|" << std::setw(10) << std::right << "Last Name" << std::flush;
	std::cout << "|" << std::setw(10) << std::right << "Nickname" << std::flush;
	std::cout << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	if (!this->m_empty)
	{
		for (size_t i = 0; i < 8; i++)
			this->m_contacts[i].display_contact(i);
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << std::endl;
		this->search_contact();
	}
	else
	{
		std::cout << std::setw(10) << "Empty phonebook!" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
	std::cout << std::endl;
}

void	PhoneBook::add_contact(void)
{
	static int	i;
	this->m_empty = false;
	this->m_contacts[i % 8].init();
	this->m_contacts[i % 8].set_index(i % 8);
	i++;
	this->m_nb_contacts = i;
}
