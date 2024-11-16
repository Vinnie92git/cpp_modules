/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:20:04 by vini              #+#    #+#             */
/*   Updated: 2024/11/15 22:05:06 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("PPF00", false, 25, 5), target("No target")
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("PPF01", false, 25, 5), target(target)
{
	std::cout << "PresidentialPardonForm parameterized constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& toCopy)
	: AForm(toCopy), target(toCopy.target)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = toCopy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& toAssign)
{
	if (this != &toAssign)
		this->target = toAssign.target;
	std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm default destructor called" << std::endl;
}
