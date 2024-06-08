/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipalaci <vipalaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 21:49:27 by vini              #+#    #+#             */
/*   Updated: 2024/05/27 13:59:10 by vipalaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

class Animal
{
protected:
	std::string	type;

public:
	Animal();
	Animal(std::string type);
	Animal(const Animal& obj);
	Animal& operator=(const Animal& obj);
	virtual ~Animal();
	
	virtual void	makeSound(void) const;
	std::string		getType(void) const;
};

#endif
