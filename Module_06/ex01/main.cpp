/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:41:40 by vini              #+#    #+#             */
/*   Updated: 2025/01/16 19:31:50 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Serializer.hpp"

int	main(void)
{
	Data	data;
	Data	*deserialized;
	uintptr_t	serialized;

	serialized = Serializer::serialize(&data);
	deserialized = Serializer::deserialize(serialized);
	std::cout << "Data object address:\n-" << &data << std::endl;
	std::cout << "Data object members:\n" << data << std::endl;
	std::cout << "Serialized data value:\n-" << serialized << std::endl;
	std::cout << "Deserialized data object address:\n-" << deserialized << std::endl;
	std::cout << "Deserialized data object members:\n" << *deserialized << std::endl;

	if (&data == deserialized)
		std::cout << "The original pointer has remained unchanged after serialization process" << std::endl;
	else
		std::cout << "Something went wrong during serialization process" << std::endl;

	return 0;
}
