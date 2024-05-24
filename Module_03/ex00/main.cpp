/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:45:52 by vini              #+#    #+#             */
/*   Updated: 2024/05/24 15:42:19 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	stock;
	ClapTrap 	claptrap("Claptrap P. Claptrappington");
	ClapTrap	fragtrap(stock);
	ClapTrap	ninja("Interplanetary Ninja Assassin");

	fragtrap = ninja;

	claptrap.attack("Interplanetary Ninja Assassin");
	ninja.takeDamage(4);

	claptrap.attack("Interplanetary Ninja Assassin");
	ninja.takeDamage(3);

	claptrap.attack("Interplanetary Ninja Assassin");
	ninja.takeDamage(1);

	ninja.beRepaired(2);

	claptrap.attack("Interplanetary Ninja Assassin");
	ninja.takeDamage(5);

	ninja.attack("Claptrap P. Claptrappington");
	fragtrap.attack("Claptrap P. Claptrappington");
	claptrap.takeDamage(0);

	ninja.beRepaired(10);
	
	stock.attack("Claptrap P. Claptrappington");
	claptrap.takeDamage(20);

	return (0);
}
