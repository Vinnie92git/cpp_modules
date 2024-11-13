/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:48:39 by vini              #+#    #+#             */
/*   Updated: 2024/11/13 18:59:37 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("AA01"), isSigned(false), signGrade(150), execGrade(150)
{
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(std::string name, bool isSigned, int signGrade, int execGrade) : name(name), isSigned(isSigned), signGrade(signGrade), execGrade(execGrade)
{
	std::cout << "AForm parameterized constructor called" << std::endl;
	if (signGrade > 150 || execGrade > 150)
		throw AForm::GradeTooLowException();
	else if (signGrade < 1 || execGrade < 1)
		throw AForm::GradeTooHighException();
}

AForm::AForm(const AForm& toCopy) : name(toCopy.getName()), isSigned(toCopy.getSignature()), signGrade(toCopy.getSignGrade()), execGrade(toCopy.getExecGrade())
{
	std::cout << "AForm copy constructor called" << std::endl;
	*this = toCopy;
}

AForm& AForm::operator=(const AForm& toAssign)
{
	if (this != &toAssign)
		this->isSigned = toAssign.isSigned;
	std::cout << "AForm copy assignment operator called" << std::endl;
	return *this;
}

AForm::~AForm()
{
	std::cout << "AForm default destructor called" << std::endl;
}

std::string AForm::getName() const
{
	return this->name;
}

bool	AForm::getSignature() const
{
	return this->isSigned;
}

int	AForm::getSignGrade() const
{
	return this->signGrade;
}

int	AForm::getExecGrade() const
{
	return this->execGrade;
}

void	AForm::beSigned(Bureaucrat& bureaucrat)
{
	if (this->isSigned)
		bureaucrat.signForm(this->name, 1);
	else if (bureaucrat.getGrade() > this->signGrade)
	{
		bureaucrat.signForm(this->name, 2);
		throw AForm::GradeTooLowException();
	}
	else
	{
		bureaucrat.signForm(this->name, 3);
		this->isSigned = true;
	}
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high for the AForm.");
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low for the AForm.");
}

std::ostream& operator<<(std::ostream& out, const AForm& form)
{
	out << form.getName() << ", signature status " << form.getSignature() << ", signing clearance level " << form.getSignGrade() << ", execution clearance level " << form.getExecGrade();
	return out;
}
