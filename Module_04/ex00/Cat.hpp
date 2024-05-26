/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 21:49:32 by vini              #+#    #+#             */
/*   Updated: 2024/05/25 21:53:52 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <iomanip>

class Cat
{
private:

public:
	Cat();
	Cat(const Cat& obj);
	Cat& operator=(const Cat& obj);
	~Cat();
	void	getter(void);
	void	setter(void);
};

#endif