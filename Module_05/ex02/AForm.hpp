/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:48:43 by vini              #+#    #+#             */
/*   Updated: 2024/11/16 01:27:51 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class AForm
{
public:
	AForm();
	AForm(std::string name, bool isSigned, int signGrade, int execGrade);
	AForm(const AForm& toCopy);
	AForm& operator=(const AForm& toAssign);
	virtual ~AForm();

	std::string	getName() const;
	bool		getSignature() const;
	int			getSignGrade() const;
	int			getExecGrade() const;

	void			beSigned(Bureaucrat& bureaucrat);
	// virtual void	execute(Bureaucrat const & executor) const = 0;

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
	int const			signGrade;
	int const			execGrade;
};

std::ostream& operator<<(std::ostream& out, const AForm& form);

#endif