/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipalaci <vipalaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:00:42 by vini              #+#    #+#             */
/*   Updated: 2024/05/14 13:58:11 by vipalaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Wrong number of arguments." << std::endl;
		return (1);
	}

	std::ifstream	infile(argv[1]);
	if (!infile.is_open())
	{
		std::cerr << "Error opening file." << std::endl;
		return (1);
	}

	std::string		outfile_name(argv[1]);
	std::ofstream	outfile;
	outfile_name.append(".replace");
	outfile.open(outfile_name.c_str());
	
	std::string		content;
	std::string		searchWord(argv[2]);
	std::string		replaceWord(argv[3]);
	std::getline(infile, content, '\0');
	size_t			pos = content.find(searchWord);
	while (pos != std::string::npos)
	{
		content.erase(pos, searchWord.length());
		content.insert(pos, replaceWord);
		pos = content.find(searchWord);
	}
	outfile << content;

	infile.close();
	outfile.close();
	
	return (0);
}
