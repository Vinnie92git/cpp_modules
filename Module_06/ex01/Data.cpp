/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:52:33 by vini              #+#    #+#             */
/*   Updated: 2025/01/16 19:20:32 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() :content("empty"), id(0)
{
	// std::cout << "Data default constructor called" << std::endl;
}

Data::Data(const Data& toCopy)
{
	// std::cout << "Data copy constructor called" << std::endl;
	*this = toCopy;
}

Data& Data::operator=(const Data& toAssign)
{
	if (this != &toAssign)
	{
		this->id = toAssign.id;
		this->content = toAssign.content;
	}
	// std::cout << "Data copy assignment operator called" << std::endl;
	return *this;
}

Data::~Data()
{
	// std::cout << "Data default destructor called" << std::endl;
}

std::string	Data::getContent()
{
	return this->content;
}

int	Data::getId()
{
	return this->id;
}

std::ostream& operator<<(std::ostream& out, Data& data)
{
	out << "-Id: " << data.getId() << "\n-Content: " << data.getContent();
	return out;
}
