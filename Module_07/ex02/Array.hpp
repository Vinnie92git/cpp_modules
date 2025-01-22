/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 20:31:49 by vini              #+#    #+#             */
/*   Updated: 2025/01/22 15:24:41 by vini             ###   ########.fr       */
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
		array = new T[0];
		arraySize = 0;
	}

	Array(unsigned int n)
	{
		array = new T[n];
		arraySize = n;
	}

	Array(const Array& toCopy)
	{
		arraySize = toCopy.arraySize;
		array = new T[arraySize];
		for (int i = 0; i < arraySize; i++)
			array[i] = toCopy.array[i];
		*this = toCopy;
	}

	Array& operator=(const Array& toAssign)
	{
		if (this != &toAssign)
		{
			delete[] array;
			arraySize = toAssign.arraySize;
			array = new T[arraySize];
			for (int i = 0; i < arraySize; i++)
				array[i] = toAssign.array[i];
		}
		return *this;
	}

	T& operator[](int i)
	{
		if (i < 0 || i >= arraySize)
			throw Array<T>::OutOfBoundsException();
		return array[i];
	}

	~Array()
	{
		delete[] array;
	}

	int	size()
	{
		return arraySize;
	}

	class OutOfBoundsException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

private:
	T*	array;
	int	arraySize;
};

template<typename T>
const char*	Array<T>::OutOfBoundsException::what() const throw()
{
	return ("Error: index is out of bounds");
}

#endif