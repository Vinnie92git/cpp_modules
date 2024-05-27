/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipalaci <vipalaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 21:49:24 by vini              #+#    #+#             */
/*   Updated: 2024/05/27 13:37:40 by vipalaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Animal.hpp"

Animal::Animal() : type("unknown animal")
{
	std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(std::string type)
{
	std::cout << "Animal constructor called (with parameter)." << std::endl;
	this->type = type;
}

Animal::Animal(const Animal& obj)
{
	*this = obj;
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal& Animal::operator=(const Animal& obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
	}
	std::cout << "Animal assignment operator called." << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "One unknown animal is making an unintelligible sound." << std::endl;
}

std::string		Animal::getType(void) const
{
	return (this->type);
}
