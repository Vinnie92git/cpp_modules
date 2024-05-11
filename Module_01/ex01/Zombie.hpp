/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:56:46 by vipalaci          #+#    #+#             */
/*   Updated: 2024/05/11 22:39:43 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie
{
private:
	std::string	m_name;
	
public:
	Zombie();
	~Zombie();
	void	announce(void);
	void	setName(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
