/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 20:37:55 by vini              #+#    #+#             */
/*   Updated: 2025/01/29 19:38:56 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <stack>
#include <list>
#include "MutantStack.hpp"

int	main(void)
{
	std::cout << "Testing with provided main..." << std::endl;

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.top() << std::endl;
	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << std::endl;
	std::cout << "Testing copying the MutantStack to an STL Stack..." << std::endl;

	std::stack<int> s(mstack);

	std::cout << mstack.size() << std::endl;
	std::cout << s.top() << std::endl;

	mstack.pop();

	std::cout << mstack.top() << std::endl;
	std::cout << std::endl;
	std::cout << "Testing with STL List..." << std::endl;

	std::list<int> lst;

	lst.push_back(5);
	lst.push_back(17);

	std::cout << lst.back() << std::endl;

	lst.pop_back();

	std::cout << lst.back() << std::endl;
	std::cout << lst.size() << std::endl;

	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);

	std::list<int>::iterator listIt = lst.begin();
	std::list<int>::iterator listIte = lst.end();

	++listIt;
	--listIt;
	while (listIt != listIte)
	{
		std::cout << *listIt << std::endl;
		listIt++;
	}

	std::cout << std::endl;

	return 0;
}
