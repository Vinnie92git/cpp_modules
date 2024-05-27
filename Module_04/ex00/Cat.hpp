/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipalaci <vipalaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 21:49:32 by vini              #+#    #+#             */
/*   Updated: 2024/05/27 14:07:00 by vipalaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <iomanip>
#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat& obj);
	Cat& operator=(const Cat& obj);
	~Cat();

	void	makeSound(void) const;
};

#endif
