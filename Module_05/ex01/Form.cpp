/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:48:39 by vini              #+#    #+#             */
/*   Updated: 2024/11/12 22:41:43 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("AA01"), isSigned(false), signGrade(150), execGrade(150)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, bool isSigned, int signGrade, int execGrade) : name(name), isSigned(isSigned), signGrade(signGrade), execGrade(execGrade)
{
	std::cout << "Form parameterized constructor called" << std::endl;
	if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
	else if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form& toCopy) : name(toCopy.getName()), isSigned(toCopy.getSignature()), signGrade(toCopy.getSignGrade()), execGrade(toCopy.getExecGrade())
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = toCopy;
}

Form& Form::operator=(const Form& toAssign)
{
	if (this != &toAssign)
		this->isSigned = toAssign.isSigned;
	std::cout << "Form copy assignment operator called" << std::endl;
	return *this;
}

Form::~Form()
{
	std::cout << "Form default destructor called" << std::endl;
}

std::string Form::getName() const
{
	return this->name;
}

bool	Form::getSignature() const
{
	return this->isSigned;
}

int	Form::getSignGrade() const
{
	return this->signGrade;
}

int	Form::getExecGrade() const
{
	return this->execGrade;
}

void	Form::beSigned(Bureaucrat& bureaucrat)
{
	if (this->isSigned)
		bureaucrat.signForm(this->name, 1);
	else if (bureaucrat.getGrade() > this->signGrade)
	{
		bureaucrat.signForm(this->name, 2);
		throw Form::GradeTooLowException();
	}
	else
	{
		bureaucrat.signForm(this->name, 3);
		this->isSigned = true;
	}
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high for the Form.");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low for the Form.");
}

std::ostream& operator<<(std::ostream& out, const Form& form)
{
	out << form.getName() << ", signature status " << form.getSignature() << ", signing clearance level " << form.getSignGrade() << ", execution clearance level " << form.getExecGrade();
	return out;
}
