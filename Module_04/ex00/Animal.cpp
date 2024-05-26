/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 21:49:24 by vini              #+#    #+#             */
/*   Updated: 2024/05/26 21:52:12 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("unknown animal")
{
	std::cout << "One " << this->type << " suddenly appeared." << std::endl;
}

Animal::Animal(const Animal& obj)
{
	*this = obj;
	std::cout << "One " << this->type << " was cloned." << std::endl;
}

Animal& Animal::operator=(const Animal& obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
	}
	std::cout << "One " << this->type << " consciousness was copied." << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "One " << this->type << " has disappeared." << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "One " << this->type << " is making an unintelligible sound." << std::endl;
}

std::string		Animal::getType(void) const
{
	return (this->type);
}
