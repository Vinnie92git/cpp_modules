/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:48:43 by vini              #+#    #+#             */
/*   Updated: 2024/11/18 16:15:16 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include <unistd.h>
#include <fstream>
#include "Bureaucrat.hpp"

class AForm
{
public:
	AForm();
	AForm(std::string name, bool isSigned, int signGrade, int execGrade);
	AForm(const AForm& toCopy);
	AForm& operator=(const AForm& toAssign);
	~AForm();

	std::string	getName() const;
	bool		getSignature() const;
	int			getSignGrade() const;
	int			getExecGrade() const;

	void	beSigned(Bureaucrat& bureaucrat);
	// void	execute(Bureaucrat const & executor);

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class FormNotSignedException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
	
private:
	std::string const	name;
	bool				isSigned;
	int const			signGrade;
	int const			execGrade;
};

std::ostream& operator<<(std::ostream& out, const AForm& form);

#endif