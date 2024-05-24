/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:57:31 by vini              #+#    #+#             */
/*   Updated: 2024/05/24 18:06:08 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->hitPoints = 100;
	this->maxHitpoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "Fragtrap " << this->name << " has been created." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->maxHitpoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "Fragtrap " << this->name << " has been created." << std::endl;
}

FragTrap::FragTrap(const FragTrap& toCopy) : ClapTrap(toCopy)
{
	std::cout << "Fragtrap " << this->name << " has been cloned. *Oh god no*" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "A Fragtrap has been destroyed." << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->energyPoints <= 0 || this->hitPoints <= 0)
	{
		std::cout << "Fragtrap " << this->name << " is out of juice and can't attack!" << std::endl;
		return ;
	}
	this->energyPoints -= 1;
	std::cout << "Fragtrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->energyPoints <= 0 || this->hitPoints <= 0)
	{
		std::cout << "Fragtrap " << this->name << " is out of juice and can't lift its hand!" << std::endl;
		return ;
	}
	std::cout << "Fragtrap " << this->name << " is trying to high-five you!" << std::endl;
}
