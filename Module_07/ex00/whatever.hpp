/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:23:34 by vini              #+#    #+#             */
/*   Updated: 2025/01/20 18:51:56 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <iomanip>
#include <string>

template<typename T>
void	swap(T& arg1, T& arg2)
{
	T	aux;
	
	aux = arg1;
	arg1 = arg2;
	arg2 = aux;
}

template<typename T>
T	min(T arg1, T arg2)
{
	if (arg1 < arg2)
		return (arg1);
	else
		return (arg2);
}

template<typename T>
T	max(T arg1, T arg2)
{
	if (arg1 > arg2)
		return (arg1);
	else
		return (arg2);
}

#endif
