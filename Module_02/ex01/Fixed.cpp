/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:58:14 by vipalaci          #+#    #+#             */
/*   Updated: 2024/05/17 00:38:53 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cmath>
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

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called." << std::endl;
	this->value = (nb << (this->bits));
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called." << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called." << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float	Fixed::toFloat(void) const
{
	
}

int	Fixed::toInt(void) const
{
	
}