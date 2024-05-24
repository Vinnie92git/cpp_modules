/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 22:01:00 by vini              #+#    #+#             */
/*   Updated: 2024/05/24 16:55:56 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :name("-Stock model-"), hitPoints(10), maxHitpoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Claptrap " << this->name << " has been created. *Great...*" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), maxHitpoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Claptrap " << this->name << " has been created. *Great...*" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& toCopy)
{
	*this = toCopy;
	std::cout << "Claptrap " << this->name << " has been cloned. *Oh god no*" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& toAssign)
{
	if (this != &toAssign)
	{
		this->name = toAssign.name;
		this->hitPoints = toAssign.hitPoints;
		this->maxHitpoints = toAssign.maxHitpoints;
		this->energyPoints = toAssign.energyPoints;
		this->attackDamage = toAssign.attackDamage;
	}
	std::cout << "Claptrap " << this->name << " personality has been copied." << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "A Claptrap has been destroyed. *Oh no! Anyway...*" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints <= 0 || this->hitPoints <= 0)
	{
		std::cout << "Claptrap " << this->name << " is out of juice and can't attack!" << std::endl;
		return ;
	}
	this->energyPoints -= 1;
	std::cout << "Claptrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->hitPoints)
	{
		std::cout << "Claptrap " << this->name << " has sustained " << amount << " points of damage and has been taken out! *Finally! I mean, how terrible!*" << std::endl;
		this->hitPoints = 0;
		return ;
	}
	this->hitPoints	-= amount;
	std::cout << "Claptrap " << this->name << " has sustained " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints <= 0 || this->hitPoints <= 0)
	{
		std::cout << "Claptrap " << this->name << " is out of juice and can't repair!" << std::endl;
		return ;
	}
	std::cout << "Claptrap " << this->name << " repairs itself for " << amount << " hitpoints!" << std::endl;
	if (amount + this->hitPoints >= this->maxHitpoints)
	{
		this->energyPoints -= 1;
		this->hitPoints = this->maxHitpoints;
		return ;
	}
	this->energyPoints -= 1;
	this->hitPoints += amount;
}
