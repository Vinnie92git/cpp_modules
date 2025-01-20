/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:54:29 by vini              #+#    #+#             */
/*   Updated: 2025/01/20 19:46:06 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <iomanip>

template<typename T, typename F>
void	iter(T* array, size_t len, F func)
{
	for (size_t i = 0; i < len; i++)
		func(array[i]);
}

#endif