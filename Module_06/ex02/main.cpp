/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:41:40 by vini              #+#    #+#             */
/*   Updated: 2025/01/16 22:58:17 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void)
{
	int	i = rand() % 3;
	
	if (i == 0)
		return new A();
	else if (i == 1)
		return new B();
	else
		return new C();
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "-Object of type A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "-Object of type B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "-Object of type C" << std::endl;
	else
		std::cout << "Unable to identify the type of the object" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		dynamic_cast<A&>(p);
		std::cout << "-Object of type A" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		dynamic_cast<B&>(p);
		std::cout << "-Object of type B" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		dynamic_cast<C&>(p);
		std::cout << "-Object of type C" << std::endl;
	}
	catch(const std::exception& e) {}
}

int	main(void)
{
	srand(time(NULL));

	Base*	randInstance = generate();
	Base*	randInstance2 = generate();
	Base*	randInstance3 = generate();

	std::cout << "Identifying by pointer:" << std::endl;
	identify(randInstance);
	identify(randInstance2);
	identify(randInstance3);

	std::cout << "Identifying by reference:" << std::endl;
	identify(*randInstance);
	identify(*randInstance2);
	identify(*randInstance3);

	delete randInstance;
	delete randInstance2;
	delete randInstance3;
	
	return 0;
}
