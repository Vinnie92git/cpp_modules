/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipalaci <vipalaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 22:57:16 by vini              #+#    #+#             */
/*   Updated: 2024/05/16 13:39:17 by vipalaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called." << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed& obj)
{
	std::cout << "Copy constructor called." << std::endl;
	this->setRawBits(obj.getRawBits());
}

Fixed& Fixed::operator=(const Fixed& obj)
{
	std::cout << "Copy asignment operator called." << std::endl;
	if (this != &obj)
		this->value = obj.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called." << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}
