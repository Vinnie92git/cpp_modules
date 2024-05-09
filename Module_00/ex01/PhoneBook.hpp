/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipalaci <vipalaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:15:37 by vini              #+#    #+#             */
/*   Updated: 2024/05/09 12:36:59 by vipalaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	m_contacts[8];
	int		m_nb_contacts;
	bool	m_empty;
	
public:
	PhoneBook();
	~PhoneBook();
	void	add_contact(void);
	void	display_phonebook(void);
	void	search_contact(void);
};

#endif
