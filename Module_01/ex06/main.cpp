/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:08:47 by vipalaci          #+#    #+#             */
/*   Updated: 2024/06/25 21:07:30 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

void	instructions(void)
{
	std::cout << "Use exactly one(1) parameter." << std::endl;
	std::cout << std::endl;
	std::cout << "-------------HARL LEVELS--------------" << std::endl;
	std::cout << "\t\tDEBUG" << std::endl;
	std::cout << "\t\tINFO" << std::endl;
	std::cout << "\t\tWARNING" << std::endl;
	std::cout << "\t\tERROR" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	std::cout << std::endl;
}

int	main(int argc, char **argv)
{
	Harl		harl;

	if (argc != 2)
		instructions();
	else
		harl.complain(argv[1]);
	return (0);
}
