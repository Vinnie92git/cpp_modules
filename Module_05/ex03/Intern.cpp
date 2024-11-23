/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 22:36:51 by vini              #+#    #+#             */
/*   Updated: 2024/11/23 16:13:22 by vini             ###   ########.fr       */
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
	(void)toAssign;
	std::cout << "Intern copy assignment operator called" << std::endl;
	return *this;
}

Intern::~Intern()
{
	std::cout << "Intern default destructor called" << std::endl;
}

AForm*	Intern::makeShrubberyForm(std::string target)
{
	AForm*	form = new ShrubberyCreationForm(target);
	return form;
}

AForm*	Intern::makeRobotomyForm(std::string target)
{
	AForm*	form = new RobotomyRequestForm(target);
	return form;
}

AForm*	Intern::makePresidentialForm(std::string target)
{
	AForm*	form = new PresidentialPardonForm(target);
	return form;
}

AForm* Intern::makeForm(std::string formName, std::string formTarget)
{
	AForm*		form = NULL;
	funcPtr		formFuncs[] = {&Intern::makeShrubberyForm, &Intern::makeRobotomyForm, &Intern::makePresidentialForm};
	std::string	forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (size_t i = 0; i < 3; i++)
	{
		if (formName == forms[i])
		{
			form = (this->*formFuncs[i])(formTarget);
			std::cout << "Intern creates " << formName << " form." << std::endl;
			return form;
		}
	}
	std::cout << formName << " it's an invalid form name." << std::endl;
	return NULL;
}