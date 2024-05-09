/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipalaci <vipalaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 12:30:36 by vipalaci          #+#    #+#             */
/*   Updated: 2024/05/09 13:53:01 by vipalaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "A stealthy undead Feijoo rises from the stack!" << std::endl;
	Zombie	zombie_1("Feijoo");
	std::cout << std::endl;

	std::cout << "A new undead Sanchez rises from the heap!" << std::endl;
	Zombie	*zombie_2 = newZombie("Sanchez");
	zombie_2->announce();
	delete zombie_2;
	std::cout << std::endl;

	std::cout << "A random undead Abascal appears!" << std::endl;
	randomChump("Abascal");
	std::cout << std::endl;
	
	return (0);
}
