/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:48:39 by vini              #+#    #+#             */
/*   Updated: 2024/11/10 22:27:30 by vini             ###   ########.fr       */
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

