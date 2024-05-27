/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipalaci <vipalaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:25:39 by vipalaci          #+#    #+#             */
/*   Updated: 2024/05/27 14:31:44 by vipalaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called." << std::endl;
}

Brain::Brain(const Brain& obj)
{
	*this = obj;
	std::cout << "Brain copy constructor called." << std::endl;
}

// Brain& Brain::operator=(const Brain& obj)
// {
// 	if (this != &obj)
// 	{
// 		this->type = obj.type;
// 	}
// 	std::cout << "Brain assignment operator called." << std::endl;
// 	return (*this);
// }

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}
