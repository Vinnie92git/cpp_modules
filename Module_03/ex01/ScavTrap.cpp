/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 22:02:28 by vini              #+#    #+#             */
/*   Updated: 2024/05/24 16:56:32 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->hitPoints = 100;
	this->maxHitpoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "Scavtrap " << this->name << " has been created." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->maxHitpoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "Scavtrap " << this->name << " has been created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& toCopy) : ClapTrap(toCopy)
{
	std::cout << "Scavtrap " << this->name << " has been cloned. *Oh god no*" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "A Scavtrap has been destroyed." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->energyPoints <= 0 || this->hitPoints <= 0)
	{
		std::cout << "Scavtrap " << this->name << " is out of juice and can't attack!" << std::endl;
		return ;
	}
	this->energyPoints -= 1;
	std::cout << "Scavtrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "Scavtrap " << this->name << " is on guard duty!" << std::endl;
}
