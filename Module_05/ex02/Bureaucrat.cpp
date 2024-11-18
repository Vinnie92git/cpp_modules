/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:02:17 by vini              #+#    #+#             */
/*   Updated: 2024/11/18 22:32:43 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("John Doe"), grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	std::cout << "Bureaucrat parameterized constructor called" << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& toCopy) : name(toCopy.getName())
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = toCopy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& toAssign)
{
	if (this != &toAssign)
		this->grade = toAssign.grade;
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat default destructor called" << std::endl;
}

std::string	Bureaucrat::getName() const
{
	return this->name;
}

int	Bureaucrat::getGrade() const
{
	return this->grade;
}

void	Bureaucrat::increment()
{
	if (this->grade > 1)
	{
		this->grade--;
		std::cout << this->name << " has been promoted." << std::endl;
	}
	else
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrement()
{
	if (this->grade < 150)
	{
		this->grade++;
		std::cout << this->name << " has been demoted." << std::endl;
	}
	else
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::signForm(std::string form, int status)
{
	if (status == 1)
		std::cout << *this << ", couldn't sign " << form << " because it's already signed." << std::endl;
	else if (status == 2)
		std::cout << *this << ", couldn't sign " << form << " because their grade is too low." << std::endl;
	else
		std::cout << *this << ", signed " << form << std::endl;
}

void	Bureaucrat::executeForm(AForm const & form)
{
	if (form.getSignature() != true)
		std::cout << *this << ", couldn't execute " << form.getName() << " because it's not signed." << std::endl;
	else if (this->getGrade() > form.getExecGrade())
		std::cout << *this << ", couldn't execute " << form.getName() << " because their grade is too low." << std::endl;
	form.execute(*this);
	std::cout << *this << ", executed " << form.getName() << std::endl;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high for a bureaucrat.");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low for a bureaucrat.");
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return out;
}
