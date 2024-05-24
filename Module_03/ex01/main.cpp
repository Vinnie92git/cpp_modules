/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 10:28:49 by vini              #+#    #+#             */
/*   Updated: 2024/05/24 17:37:22 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	stock;
	ScavTrap	claptrap("Claptrap P. Claptrappington");
	ScavTrap	fragtrap(stock);
	ScavTrap	ninja("Interplanetary Ninja Assassin");

	fragtrap = ninja;

	claptrap.attack("Interplanetary Ninja Assassin");
	ninja.takeDamage(10);

	claptrap.attack("Interplanetary Ninja Assassin");
	ninja.takeDamage(10);

	claptrap.attack("Interplanetary Ninja Assassin");
	ninja.takeDamage(10);

	ninja.beRepaired(10);

	claptrap.attack("Interplanetary Ninja Assassin");
	ninja.takeDamage(10);

	ninja.attack("Claptrap P. Claptrappington");
	fragtrap.attack("Claptrap P. Claptrappington");
	claptrap.takeDamage(10);

	ninja.beRepaired(10);
	
	stock.attack("EVERYONE");
	claptrap.takeDamage(20);
	fragtrap.takeDamage(100);
	claptrap.takeDamage(80);
	ninja.takeDamage(70);
	
	return (0);
}
