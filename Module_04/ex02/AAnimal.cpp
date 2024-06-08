/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipalaci <vipalaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:25:34 by vipalaci          #+#    #+#             */
/*   Updated: 2024/05/28 18:46:06 by vipalaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "AAnimal.hpp"

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
