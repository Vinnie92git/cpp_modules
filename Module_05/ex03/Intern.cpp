/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 22:36:51 by vini              #+#    #+#             */
/*   Updated: 2024/11/18 23:01:44 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern& toCopy)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = toCopy;
}

Intern& Intern::operator=(const Intern& toAssign)
{
	std::cout << "Intern copy assignment operator called" << std::endl;
	return *this;
}

Intern::~Intern()
{
	std::cout << "Intern default destructor called" << std::endl;
}

AForm* Intern::makeForm(std::string formName, std::string formTarget)
{
	
}