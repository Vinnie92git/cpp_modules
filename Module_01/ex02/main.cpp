/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 22:34:35 by vini              #+#    #+#             */
/*   Updated: 2024/05/11 22:56:38 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	greeting = "HI THIS IS BRAIN";
	std::string	*stringPTR = &greeting;
	std::string	&stringREF = greeting;

	std::cout << "Memory addresses: " << std::endl;
	std::cout << &greeting << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	std::cout << std::endl;
	
	std::cout << "Values: " << std::endl;
	std::cout << greeting << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	std::cout << std::endl;

	return (0);
}
