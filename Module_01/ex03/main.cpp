/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 23:02:50 by vini              #+#    #+#             */
/*   Updated: 2024/05/13 14:52:40 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	{
		Weapon	club = Weapon("crude spiked club");

		HumanA	sanchez("Sanchez", club);
		sanchez.attack();
		club.setType("some other type of club");
		sanchez.attack();
	}
	{
		Weapon	club = Weapon("crude spiked club");

		HumanB	feijoo("Feijoo");
		feijoo.attack();
		feijoo.setWeapon(club);
		feijoo.attack();
		club.setType("some other type of club");
		feijoo.attack();
	}

	return (0);
}