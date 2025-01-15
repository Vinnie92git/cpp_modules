/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:52:33 by vini              #+#    #+#             */
/*   Updated: 2025/01/15 17:53:56 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{
	std::cout << "Data default constructor called" << std::endl;
}

Data::Data(const Data& toCopy)
{
	std::cout << "Data copy constructor called" << std::endl;
	*this = toCopy;
}

Data& Data::operator=(const Data& toAssign)
{
	std::cout << "Data copy assignment operator called" << std::endl;
	return *this;
}

Data::~Data()
{
	std::cout << "Data default destructor called" << std::endl;
}