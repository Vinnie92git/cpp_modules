/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 23:02:40 by vini              #+#    #+#             */
/*   Updated: 2024/05/12 00:01:24 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name)
{
}

HumanA::~HumanA()
{
}

void	HumanA::getter(void)
{
}

void	HumanA::setter(void)
{
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->Weapon << std::endl;
}
