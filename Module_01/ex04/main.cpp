/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:00:42 by vini              #+#    #+#             */
/*   Updated: 2024/05/13 22:53:41 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Wrong number of arguments." << std::endl;
		return (1);
	}

	std::ifstream	infile(argv[1]);
	if (!infile.is_open())
	{
		std::cerr << "Error opening file." << std::endl;
		return (1);
	}

	std::string	content;
	std::getline(infile, content, '\0');
	return (0);
}