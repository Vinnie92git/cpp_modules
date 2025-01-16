/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:52:29 by vini              #+#    #+#             */
/*   Updated: 2025/01/16 19:13:16 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iomanip>
#include <iostream>
#include <stdint.h>

class Data
{
public:
	Data();
	Data(const Data& toCopy);
	Data& operator=(const Data& toAssign);
	~Data();

	std::string	getContent();
	int			getId();

private:
	std::string	content;
	int			id;
};

std::ostream& operator<<(std::ostream& out, Data& data);

#endif