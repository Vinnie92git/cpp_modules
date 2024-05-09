/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipalaci <vipalaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 13:56:53 by vipalaci          #+#    #+#             */
/*   Updated: 2024/05/09 15:31:01 by vipalaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N = 10;
	Zombie	*horde = zombieHorde(N, "zombie");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}