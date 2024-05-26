/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 21:49:37 by vini              #+#    #+#             */
/*   Updated: 2024/05/25 21:54:41 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <iomanip>

class Dog
{
private:

public:
	Dog();
	Dog(const Dog& obj);
	Dog& operator=(const Dog& obj);
	~Dog();
	void	getter(void);
	void	setter(void);
};

#endif