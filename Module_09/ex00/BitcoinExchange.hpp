/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 22:43:35 by vini              #+#    #+#             */
/*   Updated: 2025/02/03 20:31:08 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
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

	double	closestRate(const std::string& date, const std::map<std::string, double>& database);
	int		validDate(const std::string& date);
	int		parseFile(const std::string& filename);
	int		readDatabase();
	void	performExchange(const std::string& inFile);

private:
	std::map<std::string, double>	database;
};

#endif