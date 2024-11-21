/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 22:36:46 by vini              #+#    #+#             */
/*   Updated: 2024/11/21 16:33:18 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class AForm;

class Intern
{
public:
	Intern();
	Intern(const Intern& toCopy);
	Intern& operator=(const Intern& toAssign);
	~Intern();

	AForm* makeForm(std::string formName, std::string formTarget);

private:
	AForm*	makeShrubberyForm(std::string target);
	AForm*	makeRobotomyForm(std::string target);
	AForm*	makePresidentialForm(std::string target);
};

typedef AForm*	(Intern::*funcPtr)(std::string target);

#endif