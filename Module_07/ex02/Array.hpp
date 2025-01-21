/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 20:31:49 by vini              #+#    #+#             */
/*   Updated: 2025/01/21 22:45:26 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <iomanip>

template<typename T>
class Array
{
public:
	Array()
	{
		content = new T[0];
		arrayLen = 0;
	}

	Array(unsigned int n)
	{
		content = new T[n];
		arrayLen = n;
	}

	Array(Array& toCopy)
	{
		// arrayLen = toCopy.size();
		// content = new T[arrayLen];
		// for (int i = 0; i < arrayLen; i++)
		// 	content[i] = toCopy.content[i];
		*this = toCopy;
	}

	Array& operator=(const Array& toAssign)
	{
		if (this != toAssign)
		{
			delete[] content;
			arrayLen = toAssign.size();
			content = new T[arrayLen];
			for (int i = 0; i < arrayLen; i++)
				content[i] = toAssign.content[i];
		}
		return *this;
	}

	T& operator[](int i)
	{
		if (i < 0 || i >= arrayLen)
			throw std::out_of_range("Error: index is out of bounds");
		return content[i];
	}

	~Array()
	{
		delete[] content;
	}

	int	size()
	{
		return arrayLen;
	}

private:
	T*	content;
	int	arrayLen;
};

#endif