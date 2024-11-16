/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 22:14:33 by vini              #+#    #+#             */
/*   Updated: 2024/11/15 22:36:19 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("RRF00", false, 72, 45), target("No target")
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("RRF01", false, 72, 45), target(target)
{
	std::cout << "RobotomyRequestForm parameterized constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& toCopy)
	: AForm(toCopy), target(toCopy.target)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = toCopy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& toAssign)
{
	if (this != &toAssign)
		this->target = toAssign.target;
	std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm default destructor called" << std::endl;
}