/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:53:58 by vini              #+#    #+#             */
/*   Updated: 2024/05/24 18:08:01 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	stock;
	FragTrap	claptrap("Claptrap P. Claptrappington");
	FragTrap	fragtrap(stock);
	FragTrap	ninja("Interplanetary Ninja Assassin");

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

	stock.highFivesGuys();
	claptrap.highFivesGuys();
	ninja.highFivesGuys();
	fragtrap.highFivesGuys();
	
	return (0);
}
