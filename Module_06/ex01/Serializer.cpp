/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:45:28 by vini              #+#    #+#             */
/*   Updated: 2025/01/15 19:57:48 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Serializer default constructor called" << std::endl;
}

Serializer::Serializer(const Serializer& toCopy)
{
	std::cout << "Serializer copy constructor called" << std::endl;
	*this = toCopy;
}

Serializer& Serializer::operator=(const Serializer& toAssign)
{
	std::cout << "Serializer copy assignment operator called" << std::endl;
	return *this;
}

Serializer::~Serializer()
{
	std::cout << "Serializer default destructor called" << std::endl;
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
