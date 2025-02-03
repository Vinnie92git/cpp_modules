/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 22:43:35 by vini              #+#    #+#             */
/*   Updated: 2025/02/02 23:12:42 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <iomanip>
#include <fstream>
#include <map>
#include <string>
#include <sstream>

class BitcoinExchange
{
public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& toCopy);
	BitcoinExchange& operator=(const BitcoinExchange& toAssign);
	~BitcoinExchange();

	void	parseFile(const std::string& filename);
	int		readDatabase();
	void	performExchange(const std::string& inFile);

private:
	std::map<std::string, double>	database;
};

#endif