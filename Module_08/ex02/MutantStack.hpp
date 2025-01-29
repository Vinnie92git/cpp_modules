/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:07:35 by vini              #+#    #+#             */
/*   Updated: 2025/01/29 19:17:29 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <iomanip>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack<T>() {}

	MutantStack(const MutantStack& toCopy) : std::stack<T> (toCopy) {}

	MutantStack& operator=(const MutantStack& toAssign)
	{
		if (this != &toAssign)
			std::stack<T>::operator=(toAssign);
		return *this;
	}

	~MutantStack() {}

	typedef typename std::deque<T>::iterator			iterator;
	typedef typename std::deque<T>::reverse_iterator	reverseIterator;

	iterator		begin() {return this->c.begin();}
	iterator		end() {return this->c.end();}
	reverseIterator	rbegin() {return this->c.rbegin();}
	reverseIterator	rend() {return this->c.rend();}
};

#endif
