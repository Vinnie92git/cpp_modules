/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipalaci <vipalaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:25:36 by vipalaci          #+#    #+#             */
/*   Updated: 2024/05/28 18:46:47 by vipalaci         ###   ########.fr       */
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
	
	virtual void	makeSound(void) const = 0;
	std::string		getType(void) const;
};

#endif
