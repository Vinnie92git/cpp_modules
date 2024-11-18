/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:41:40 by vini              #+#    #+#             */
/*   Updated: 2024/11/18 16:18:29 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int	main(void)
{
	{
		Bureaucrat				jon;
		AForm	form;
		// std::cout << jon << std::endl;
		// std::cout << form << std::endl;
		form.beSigned(jon);
		// std::cout << form << std::endl;
	}
	{
		// try
		// {
			
		// }
		// catch(const std::exception& e)
		// {
		// 	std::cerr << e.what() << std::endl;
		// }
	}
}
