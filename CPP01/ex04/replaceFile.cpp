/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceFile.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:47:12 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/07 19:58:34 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string> 


static std::string replace_string(std::string line, std::string old_input, std::string new_input){
	std::string newS;
	std::string temp;

	int n;
	int	prev = 0;
	while ((n = line.find(old_input, prev)) != -1){
		newS = line.substr(0, n);
		temp = line.substr(n + old_input.size(), line.size() - n + old_input.size());
		line = newS.append(new_input).append(temp);
		prev = n + new_input.size();
	}
	return (newS);
}

void	replaceFile(std::ifstream& fileIn, std::ofstream& fileOut, std::string old, std::string newStr)
{
	std::string line;
	while (std::getline(fileIn, line))
	{
		if (!old.empty()){
			std::size_t found = line.find(old);
			if (found != std::string::npos)
				line = replace_string(line, old, newStr);
		}
		fileOut.write(line.c_str(), line.size());
		fileOut.write("\n", 1);
	}
	fileIn.close();
	fileOut.close();
}