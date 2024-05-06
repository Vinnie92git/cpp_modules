/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:15:45 by vini              #+#    #+#             */
/*   Updated: 2024/05/06 23:25:30 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>

class Contact
{
private:
	int			m_index;
	std::string	m_first_name;
	std::string	m_last_name;
	std::string	m_nickname;
	std::string	m_phone_number;
	std::string	m_darkest_secret;
	
public:
	Contact();
	~Contact();
	void		init(void);
	void		set_index(int i);
	void		display_contact(int index);
	void		display_fields(void);
	std::string	get_input(std::string str);
	std::string	get_name(std::string str);
};

#endif