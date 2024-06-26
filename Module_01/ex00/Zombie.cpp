/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipalaci <vipalaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 12:50:21 by vipalaci          #+#    #+#             */
/*   Updated: 2024/05/09 13:06:33 by vipalaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->m_name = name;
}

Zombie::~Zombie()
{
	std::cout << this->m_name << " was utterly destroyed!" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
