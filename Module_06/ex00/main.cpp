/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:41:40 by vini              #+#    #+#             */
/*   Updated: 2024/11/26 21:49:38 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "ScalarConverter.hpp"

int	main(int argc, char **argv) {
	if (argc != 2)
	{
		std::cout << "Only one(1) string can be used as input." << std::endl;
		return (0);
	}
	
	ScalarConverter::convert(argv[1]);

	return 0;
}
