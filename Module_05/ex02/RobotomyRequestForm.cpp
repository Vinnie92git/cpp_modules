/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 22:14:33 by vini              #+#    #+#             */
/*   Updated: 2024/11/18 21:56:47 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("RRF00", false, 72, 45), target("EVERYONE")
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

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSignature() != true)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException();
	std::cout << "Some drilling noises" << std::endl;
	sleep(1);
	srand(time(NULL));
	int	nb = rand() % 100 + 1;
	if (nb % 2 == 0)
		std::cout << this->target << " has been successfully robotomized." << std::endl;
	else
		std::cout << "The robotomy for " << this->target << " has failed." << std::endl;
}