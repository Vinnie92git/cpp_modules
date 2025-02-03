/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 22:43:38 by vini              #+#    #+#             */
/*   Updated: 2025/02/02 23:26:19 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& toCopy)
{
	*this = toCopy;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& toAssign)
{
	(void)toAssign;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void	BitcoinExchange::parseFile(const std::string& filename)
{
	std::cout << "Bla bla file " << filename << " parsed bla bla." << std::endl;
}

int	BitcoinExchange::readDatabase()
{
	std::ifstream	dbFile;

	dbFile.open("data.csv");
	if (!dbFile.is_open())
		return 0;

	std::string	line;
	while (std::getline(dbFile, line))
	{
		// std::cout << line << std::endl;
		std::istringstream	lineStream(line);
		std::string			date, rateStr;

		if (std::getline(lineStream, date, ',') && std::getline(lineStream, rateStr))
		{
			
		}
	}

	dbFile.close();
	return 1;
}

void	BitcoinExchange::performExchange(const std::string& inFile)
{
	if (readDatabase())
		parseFile(inFile);
	else
		std::cout << "Error: could not open database." << std::endl;
}
