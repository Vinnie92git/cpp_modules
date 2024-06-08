/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipalaci <vipalaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 21:49:39 by vini              #+#    #+#             */
/*   Updated: 2024/05/27 14:15:15 by vipalaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	{
		Animal	a;
		Cat		b;
		Dog		c;

		a.makeSound();
		b.makeSound();
		c.makeSound();
	}
	{
		const Animal*	meta = new Animal();
		const Animal*	d = new Dog();
		const Animal*	e = new Cat();

		std::cout << d->getType() << " " << std::endl;
		std::cout << e->getType() << " " << std::endl;
		e->makeSound();
		d->makeSound();
		meta->makeSound();

		delete e;
		delete d;
		delete meta;
	}
	return (0);
}
