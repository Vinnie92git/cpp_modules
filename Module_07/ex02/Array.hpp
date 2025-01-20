/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 20:31:49 by vini              #+#    #+#             */
/*   Updated: 2025/01/20 20:44:32 by vini             ###   ########.fr       */
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
	Array();
	Array(unsigned int n);
	Array(Array& toCopy);
	Array& operator=(const Array& toAssign);
	~Array();

	size_t	size();
private:

};

#endif