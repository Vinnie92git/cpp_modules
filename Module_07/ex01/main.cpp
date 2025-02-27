/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 12:53:47 by vini              #+#    #+#             */
/*   Updated: 2025/01/20 20:25:16 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "iter.hpp"

template<typename T>
void	print(T& param)
{
	std::cout << param;
}

int	main(void)
{
	int		intArray[] = {1, 2, 3, 4};
	char	charArray[] = "hello, world!";
	size_t	len1 = sizeof(intArray) / sizeof(intArray[0]);
	size_t	len2 = sizeof(charArray) / sizeof(charArray[0]);

	iter(intArray, len1, print<int>);
	std::cout << std::endl;
	iter(charArray, len2, print<char>);
	std::cout << std::endl;

	return 0;
}
