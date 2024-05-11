/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 23:02:42 by vini              #+#    #+#             */
/*   Updated: 2024/05/12 00:02:35 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string	Weapon;
	std::string	name;

public:
	HumanA(std::string name, class Weapon);
	~HumanA();
	void	getter(void);
	void	setter(void);
	void	attack(void);
};

#endif
