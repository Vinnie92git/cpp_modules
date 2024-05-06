/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:15:48 by vini              #+#    #+#             */
/*   Updated: 2024/05/06 22:30:10 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void		Contact::display_fields(void)
{
	if (this->m_first_name.empty())
		return ;
	std::cout << "First name:\t" << this->m_first_name << std::endl;
	std::cout << "Last name:\t" << this->m_last_name << std::endl;
	std::cout << "Nickname:\t" << this->m_nickname << std::endl;
	std::cout << "Phone number:\t" << this->m_phone_number << std::endl;
	std::cout << "Darkest secret:\t" << this->m_darkest_secret << std::endl;
}

std::string	Contact::get_name(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::display_contact(int index)
{
	if (this->m_first_name.empty())
		return ;
	std::cout << "|" << std::setw(10) << std::right << index << std::flush;
	std::cout << "|" << std::setw(10) << std::right << this->get_name(this->m_first_name) << std::flush;
	std::cout << "|" << std::setw(10) << std::right << this->get_name(this->m_last_name) << std::flush;
	std::cout << "|" << std::setw(10) << std::right << this->get_name(this->m_nickname) << std::flush;
	std::cout << "|" << std::endl;
}

void	Contact::set_index(int i)
{
	this->m_index = i;
}

std::string	Contact::get_input(std::string str)
{
	std::string	input = "";

	while (input.empty())
	{
		std::cout << str << std::flush;
		std::getline(std::cin, input);
	}
	return (input);
}

void	Contact::init(void)
{
	std::cin.ignore();
	this->m_first_name = get_input("Enter contact first name: ");
	this->m_last_name = get_input("Enter contact last name: ");
	this->m_nickname = get_input("Enter contact nickname: ");
	this->m_phone_number = get_input("Enter contact phone number: ");
	this->m_darkest_secret = get_input("Enter contact darkest secret...: ");
	std::cout << "New contact added" << std::endl;
	std::cout << std::endl;
}
