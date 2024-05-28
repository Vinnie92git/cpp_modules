/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipalaci <vipalaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:25:54 by vipalaci          #+#    #+#             */
/*   Updated: 2024/05/28 18:48:33 by vipalaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	{
		// Animal	abstract;
	}
	{
		const Animal*	a = new Dog();
		const Animal*	b = new Cat();

		a->makeSound();
		b->makeSound();

		delete a;
		delete b;
	}
	{
		Animal*	zoo[6];
		for (int i = 0; i < 6; i++)
		{
			if (i < 3)
				zoo[i] = new Dog();
			else
				zoo[i] = new Cat();
		}
		for (int i = 0; i < 6; i++)
			zoo[i]->makeSound();
		for (int i = 0; i < 6; i++)
			delete zoo[i];
	}
	
	return (0);
}
