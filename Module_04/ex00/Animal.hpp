/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 21:49:27 by vini              #+#    #+#             */
/*   Updated: 2024/05/26 21:50:16 by vini             ###   ########.fr       */
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
	Animal(const Animal& obj);
	Animal& operator=(const Animal& obj);
	virtual ~Animal();
	
	virtual void	makeSound(void) const;
	std::string		getType(void) const;
};

#endif
