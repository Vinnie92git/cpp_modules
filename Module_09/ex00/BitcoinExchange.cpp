/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 22:43:38 by vini              #+#    #+#             */
/*   Updated: 2025/02/03 20:48:49 by vini             ###   ########.fr       */
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

double BitcoinExchange::closestRate(const std::string& date, const std::map<std::string, double>& database)
{
	std::map<std::string, double>::const_iterator	it = database.lower_bound(date);

	if (it == database.begin() && it->first != date)
	{
		std::cerr << "Error: No exchange rate available => " << date << std::endl;
		return -1;
	}

	if (it == database.end() || it->first != date)
		--it;

	return it->second;
}

int		BitcoinExchange::validDate(const std::string& date)
{
	if (date.length() != 10)
		return 0;

	for (int i = 0; i < 10; ++i)
	{
		if (i == 4 || i == 7)
		{
			if (date[i] != '-')
				return 0;
		}
		else
			if (!std::isdigit(date[i]))
				return 0;
	}

	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());

	if (month < 1 || month > 12 || day < 1 || day > 31)
		return 0;

	return 1;
}

int	BitcoinExchange::parseFile(const std::string& filename)
{
	std::ifstream	inFile;

	inFile.open(filename.c_str());
	if (!inFile.is_open())
		return 0;

	std::string	line;
	std::getline(inFile, line);
	while (std::getline(inFile, line))
	{
		std::istringstream	lineStream(line);
		std::string			date, valueStr;

		if(!(std::getline(lineStream, date, '|') && std::getline(lineStream, valueStr)))
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}

		date.erase(date.find_last_not_of(" ") + 1);
        date.erase(0, date.find_first_not_of(" "));
        valueStr.erase(valueStr.find_last_not_of(" ") + 1);
        valueStr.erase(0, valueStr.find_first_not_of(" "));

		if (!validDate(date))
		{
			std::cout << "Error: bad input => " << date << std::endl;
			continue;
		}

		char*	endPtr;
		double	value = std::strtod(valueStr.c_str(), &endPtr);

		if (endPtr == valueStr.c_str())
		{
			std::cout << "Error: bad input => " << valueStr << std::endl;
			continue;
		}
		if (value < 0)
		{
			std::cout << "Error: not a positive number." << std::endl;
			continue;
		}
		if (value > 1000)
		{
			std::cout << "Error: too large a number." << std::endl;
			continue;
		}

		double	exchangeRate = closestRate(date, database);
		double	btc = value * exchangeRate;

		std::cout << date << " => " << value << " = " << btc << std::endl;
	}	

	inFile.close();
	return 1;
}

int	BitcoinExchange::readDatabase()
{
	std::ifstream	dbFile;

	dbFile.open("data.csv");
	if (!dbFile.is_open())
		return 0;

	std::string	line;
	std::getline(dbFile, line);
	while (std::getline(dbFile, line))
	{
		std::istringstream	lineStream(line);
		std::string			date, rateStr;

		if (std::getline(lineStream, date, ',') && std::getline(lineStream, rateStr))
		{
			std::stringstream	rateStream(rateStr);
			double				rate = 0;
			rateStream >> rate;
			database.insert(std::pair<std::string, double>(date, rate));
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
		std::cerr << "Error: could not open database." << std::endl;
}
