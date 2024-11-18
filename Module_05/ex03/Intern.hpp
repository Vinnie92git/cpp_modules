/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 22:36:46 by vini              #+#    #+#             */
/*   Updated: 2024/11/18 23:01:51 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class AForm;

class Intern
{
public:
	Intern();
	Intern(const Intern& toCopy);
	Intern& operator=(const Intern& toAssign);
	~Intern();

	AForm* makeForm(std::string formName, std::string formTarget);
};

#endif