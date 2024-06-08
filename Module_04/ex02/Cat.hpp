/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipalaci <vipalaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:25:47 by vipalaci          #+#    #+#             */
/*   Updated: 2024/05/28 18:46:27 by vipalaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <iomanip>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain*	brain;

public:
	Cat();
	Cat(const Cat& obj);
	Cat& operator=(const Cat& obj);
	~Cat();

	void	makeSound(void) const;
};

#endif
