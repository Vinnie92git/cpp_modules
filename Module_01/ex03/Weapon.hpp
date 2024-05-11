/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 23:02:56 by vini              #+#    #+#             */
/*   Updated: 2024/05/11 23:32:19 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <iomanip>

class Weapon
{
private:
	std::string	type;

public:
	Weapon(std::string type);
	~Weapon();
	const std::string&	getType(void);
	void				setType(std::string newType);
};

#endif
