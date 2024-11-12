/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:48:43 by vini              #+#    #+#             */
/*   Updated: 2024/11/12 21:54:04 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form
{
public:
	Form();
	Form(std::string name, bool isSigned, int signGrade, int execGrade);
	Form(const Form& toCopy);
	Form& operator=(const Form& toAssign);
	~Form();

	std::string	getName() const;
	bool		getSignature() const;
	int			getSignGrade() const;
	int			getExecGrade() const;

	void	beSigned(Bureaucrat& bureaucrat);

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
	
private:
	std::string const	name;
	bool				isSigned;
	int const	signGrade;
	int const	execGrade;
};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif