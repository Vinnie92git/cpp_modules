/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipalaci <vipalaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:25:41 by vipalaci          #+#    #+#             */
/*   Updated: 2024/05/27 14:31:26 by vipalaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
#define Brain_HPP

#include <iostream>
#include <iomanip>

class Brain
{
private:
	std::string	ideas[100];

public:
	Brain();
	Brain(const Brain& obj);
	Brain& operator=(const Brain& obj);
	~Brain();
};

#endif
