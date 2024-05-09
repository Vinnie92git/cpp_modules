/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipalaci <vipalaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 12:36:23 by vipalaci          #+#    #+#             */
/*   Updated: 2024/05/09 15:06:08 by vipalaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie
{
private:
	std::string m_name;
	
public:
	Zombie(std::string name);
	~Zombie();
	void	announce(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
